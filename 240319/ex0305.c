#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <fcntl.h>

int main(int argc, char *argv[])
{
	int fd;
	off_t newpos;
/*
	for(int n=1; n<10; n++)
		fd[n] = open(argv[n], O_RDWR);
*/


	if((fd = open(argv[1], O_RDONLY))==-1)
	{
		printf("error\n");
		exit(1);
	}

	newpos = lseek(fd, (off_t)0, SEEK_END);
	printf("file size : %ld\n", newpos);
}
