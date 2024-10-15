#include <unistd.h>
#include <signal.h>
#include <sys/types.h>
#include <stdio.h>

void int_handle(int);

int main()
{
	pid_t pid;
	static struct sigaction act;
	act.sa_handler = int_handle;
	sigfillset(&(act.sa_mask));
	sigaction(SIGCHLD, &act, NULL);
	
	pid = fork();

	if(pid == 0)
	{
		printf("[child]I am a child\n");
		kill(getppid(), SIGCHLD);
		printf("[child]bye~\n");
	}
	
	sleep(2);
}

void int_handle(int signum)
{
	printf("SIGCHLD: %d\n", signum);
	printf("[parent]bye~\n");
}


