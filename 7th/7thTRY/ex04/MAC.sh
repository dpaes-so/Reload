ifconfig  | grep "ether" | sed "s/ether//"  | sed "s/[[:space:]]//g" | sed "s/txqueuelen1000(Ethernet)//g" | sed "s/txqueuelen0(Ethernet)//"
