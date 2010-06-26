struct rtmsg 
{
	unsigned char		rtm_family;    /*The address family of the route. most commonly AF INET */
	unsigned char		rtm_dst_len;   /*The length of the destination address of the route entry */
	unsigned char		rtm_src_len;   /*The length of the source address of the route entry */
	unsigned char		rtm_tos;       /*The type of service indicator for the route */
	unsigned char		rtm_table;	/* Routing table id */
	unsigned char		rtm_protocol;	/* Routing protocol*/
	unsigned char		rtm_scope;	/* The network horizon to which this route applies */	
	unsigned char		rtm_type;	/* The type of route this route is (unreachable, broadcast,
blackhole, etc)*/
	unsigned		rtm_flags;      /* Miscelaneous operational flags applied to the route */
};
