#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

int main()
{
	int filedes;
	char pathname[] = "temp.txt";
	ssize_t nread;
	char buf[1024];

	if((filedes = open(pathname, O_CREAT | O_RDWR, 0644))==-1)
	{
		printf("file open error!\n");
		exit(1);
	}

	nread = read(filedes, buf, sizeof(buf));
	printf("nread : %ld\n", nread); 
	printf("buf : %s\n", buf);
	
	close(filedes);
}
