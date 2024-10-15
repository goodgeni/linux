#include <unistd.h>
#include <signal.h>
#include <stdio.h>

int main()
{
	sigset_t set;
	int count = 5;

	sigemptyset(&set);
//	sigaddset(&set, SIGINT);
	sigfillset(&set);

	sigprocmask(SIG_BLOCK, &set, NULL);

	while(count)
	{
		printf("don't disturb me (%d)\n", count--);
		sleep(1);
	}

	sigemptyset(&set);
	sigaddset(&set, SIGINT);
	printf("disturb me!\n");
	sigprocmask(SIG_UNBLOCK, &set, NULL);
}
