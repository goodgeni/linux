#include <unistd.h>

int main(int argc, char *argv[])
{
	pid_t pid = fork();

	if(pid > 0)
		sleep(3);

	else if(pid == 0)
	{
		execlp("wc", "wc", argv[1], argv[2], argv[3], (char *)0);
	}
}
