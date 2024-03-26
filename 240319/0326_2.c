#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char **argv)
{
	if(access(argv[1], F_OK) == -1)
	{
		printf("file is not exist\n");
		exit(1);
	}
}
