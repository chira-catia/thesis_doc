struct nat_nf_nat_range //nf_nat_range
{
	/* Set to OR of flags above. */
	unsigned int flags;

	/* Inclusive: network order. */
	unsigned int min_ip, max_ip;

	/* Inclusive: network order */
	unsigned short min, max;
};
