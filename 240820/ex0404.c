#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
	if(access(argv[1], R_OK)==-1)
	{
		fprintf(stderr, "User cannot read file %s \n", argv[1]);
		exit(1);
	}
	printf("%s is readable, proceeding \n", argv[1]);
}
