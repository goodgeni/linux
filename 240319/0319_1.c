#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int fd;
	char buffer[1024];
	int nread, cnt, numChar = 0;

	if(argc < 2)
		exit(1);

	if((fd = open(argv[1], O_RDONLY)) == -1)
	{
		printf("file open error\n");
		exit(2);
	}

	while((nread = read(fd, buffer, 1024)) > 0)
	{
		for(cnt = 0; cnt < nread; cnt++)
		{

			if((buffer[cnt] >= 'a' && buffer[cnt] <= 'z') ||
					(buffer[cnt] >= 'A' && buffer[cnt] <= 'Z'))
				numChar++;

		}
		
	}

	close(fd);
	printf("number of alphabet character is %d\n", numChar);
}
