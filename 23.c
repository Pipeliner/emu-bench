int run() {
	int s = 17;
	int i = 0;
	for (; i < 999; i++) {
		if (s%2)
			s = s*3 + 1;
		else
			s = s / 2;
		printf("%d\n", s);
	}
}
