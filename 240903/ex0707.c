#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>

int main()
{
	pid_t pid;

	pid = fork();

	if(pid > 0) // parent
	{

	}
	else if(pid ==0) //child
	{

	}
	
}
