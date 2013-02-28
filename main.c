int main() {
	struct timespec start_time, finish_time, elapsed_time;
	clock_gettime(CLOCK_MONOTONIC, &start_time);

	// From b.sh's $1
	run();

	clock_gettime(CLOCK_MONOTONIC, &finish_time);
	timespec_diff(&start_time, &finish_time, &elapsed_time);

	printf("%d.%09d elapsed\n", elapsed_time.tv_sec, elapsed_time.tv_nsec);


}
