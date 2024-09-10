#include <stdio.h>
#include <sys/types.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main()
{
	pid_t pid;
	int status;

	pid = fork();

	if(pid > 0)
	{
		printf("parent\n");
	}

	else if(pid == 0)
	{
		sleep(100);
		printf("child\n");
	}

	printf("bye\n");	
}
