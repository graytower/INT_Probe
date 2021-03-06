import os
import sys
import argparse

parser = argparse.ArgumentParser(description='CLOS architecture topology')
parser.add_argument('--nodes-list', help='Number of spine, leaf, tor, host, pod',
                    nargs='*', default=[0,0,1,2,1])
args = parser.parse_args()
print(map(int, args.nodes_list))
class flow_table():
    def flow_table_gen(self):
	nodes_list = map(int, args.nodes_list)
        spine_num = nodes_list[0]
        set_num = nodes_list[1]
        leaf_num = nodes_list[1]
        tor_num = nodes_list[2]
        h_num = nodes_list[3]
        pod_num = nodes_list[4]

        thrift_port = 9090

        with open("./command.sh", "w") as f:
            f.write("")

        # spine
        for i in xrange(set_num):
            for j in xrange(spine_num):
                with open("./flow_table/s%d_s%d.txt" % (i+1, j+1), "w") as f:
                    f.write("table_add int_table do_int => %d\n" %
                            (i*spine_num+j))

                with open("./command.sh", "a") as f:
                    f.write("sudo ../flow_table/simple_switch_CLI --thrift-port %d <../flow_table/flow_table/s%d_s%d.txt\n"%(thrift_port,i+1,j+1))
                    thrift_port+=1
        # leaf
        for i in xrange(pod_num):
            for j in xrange(leaf_num):
                with open("./flow_table/p%d_l%d.txt" % (i+1, j+1), "w") as f:
                    f.write("table_add int_table do_int => %d\n" %
                            (set_num*spine_num+i*leaf_num+j))
                    
                with open("./command.sh", "a") as f:
                    f.write("sudo ../flow_table/simple_switch_CLI --thrift-port %d <../flow_table/flow_table/p%d_l%d.txt\n"%(thrift_port,i+1,j+1))
                    thrift_port+=1

        # tor
        for i in xrange(pod_num):
            for j in xrange(tor_num):
                with open("./flow_table/p%d_t%d.txt" % (i+1, j+1), "w") as f:
                    f.write("table_add int_table do_int => %d\n" %
                            (set_num*spine_num+pod_num*leaf_num+i*tor_num+j))
                
                with open("./command.sh", "a") as f:
                    f.write("sudo ../flow_table/simple_switch_CLI --thrift-port %d <../flow_table/flow_table/p%d_t%d.txt\n"%(thrift_port,i+1,j+1))
                    thrift_port+=1


if __name__ == "__main__":
    flow_table1 = flow_table()
    flow_table1.flow_table_gen()
