#include <signal.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>

void int_handle(int);

int num = 0;

int main(int argc, char *argv[])
{
	static struct sigaction act;
	act.sa_handler = int_handle;
	sigfillset(&(act.sa_mask));
	sigaction(SIGINT, &act, NULL);
	sleep(10);
}

void int_handle(int signum)
{
	int fd;
	char *buf = "Bye~";
	fd = open("a.txt", O_CREAT | O_RDWR, 0644);
	write(fd, buf, strlen(buf));
}
