struct rtmsg 
{
	//The address family of the route. most commonly AF INET
	unsigned char		rtm_family;    
	//The length of the destination address of the route entry
	unsigned char		rtm_dst_len;   
	//The length of the source address of the route entry
	unsigned char		rtm_src_len;   
	//The type of service indicator for the route
	unsigned char		rtm_tos;       
	// Routing table id
	unsigned char		rtm_table;	
	//Routing protocol
	unsigned char		rtm_protocol;
	//The network horizon to which this route applies
	unsigned char		rtm_scope;
	//The type of route this route is (unreachable, broadcast,blackhole, etc)
	unsigned char		rtm_type;
	//Miscelaneous operational flags applied to the route
	unsigned		rtm_flags;      
};
