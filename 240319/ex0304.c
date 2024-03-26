#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{
	int fd1, fd2;
	ssize_t nread;
	char buf[1024];

	fd1 = open("temp1.txt", O_RDWR, 0644);
	if(fd1 == -1){
		printf("error fd1\n");
		exit(1);
	}
	fd2 = open("temp2.txt", O_RDWR | O_CREAT | O_TRUNC, 0644);
	if(fd2 == -1){
		printf("error fd2\n");
		exit(1);
	}

	while((nread = read(fd1, buf, 1024)) > 0){
		if(write(fd2, buf, 1024) < nread){
			close(fd1);
			close(fd2);
		}
	}

	close(fd1);
	close(fd2);
}
