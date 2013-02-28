#include <sys/types.h>
#include <time.h>
#include <stdio.h>
void timespec_diff(struct timespec *start, struct timespec *end, struct timespec *elapsed)
{
	if ((end->tv_nsec-start->tv_nsec)<0) {
		elapsed->tv_sec = end->tv_sec-start->tv_sec-1;
		elapsed->tv_nsec = 1000000000+end->tv_nsec-start->tv_nsec;
	} else {
		elapsed->tv_sec = end->tv_sec-start->tv_sec;
		elapsed->tv_nsec = end->tv_nsec-start->tv_nsec;
	}
}
