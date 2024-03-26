#include <unistd.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	char buf[1024];
	int nread;

	nread = readlink(argv[1], buf, 1024);
	write(1, buf, nread);
	printf("\n");
}
