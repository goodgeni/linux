#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
	int fd;
	char buffer[1024];
	int nread, cnt, numChar = 0;

	if(argc < 2)
		return -1;

	if((fd = open(argv[1], O_RDWR)) == -1)
	{
		printf("file open error\n");
		return -2;
	}

	while((nread = read(fd, buffer, 1024)) > 0)
	{
		printf("before : %s\n", buffer);

		for(cnt = 0; cnt < nread; cnt++)
		{
			if(buffer[cnt] >= 'a' && buffer[cnt] <= 'z')
				buffer[cnt] = buffer[cnt] - 'a' + 'A';
		}
		lseek(fd, (off_t)-nread, SEEK_CUR);
		write(fd, buffer, nread);
	}

	printf("after : %s\n", buffer);
	close(fd);
}
