struct xtc_handle *TC_INIT(const char *tablename)
{	
	//retrieve the size of data
	if (getsockopt(sockfd, TC_IPPROTO, SO_GET_INFO, &info, &s) < 0) {
		close(sockfd);
		return NULL;
	}
	//retrieve all rules
	if (getsockopt(h->sockfd, TC_IPPROTO, SO_GET_ENTRIES, h->entries,&tmp) < 0)
		goto error;
	
	//organize rules
	if (parse_table(h) < 0)
		goto error;
}

