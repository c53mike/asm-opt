static void * (*volatile memset_volatile)(void *, int, size_t) = memset;

static void
secure_zero_generic(unsigned char *p, size_t len) {
	memset_volatile(p, 0, len);
}

