#include <stdio.h>
#include <time.h>


int main()
{

	struct tm t = {0};  // Initalize to all 0's

	t.tm_year = 117;  // This is year-1900, so 112 = 2012
	t.tm_mon = 03;     //mon is 0-11
	t.tm_mday = 12;
	t.tm_hour = 16;
	t.tm_min = 07;
	t.tm_sec = 30;
	time_t timeSinceEpoch = mktime(&t);
	long tim = 1000*timeSinceEpoch;

	printf("the time val is %ld\n",timeSinceEpoch);
	printf("The time in millis is %ld\n",tim);

	return 0;
}

