	if (rtnl_open(&rth,0) < 0) {
		lkl_printf("Could not open netlink socket\n");
		return -1;
	}

	if (req.r.rtm_family == AF_UNSPEC)
		req.r.rtm_family = AF_INET;


	if ((err=rtnl_talk(&rth, &req.n, 0, 0, NULL, NULL, NULL)) < 0){
		lkl_printf("could not add route %s\n",strerror(-err));
	}
	rtnl_close(&rth);
