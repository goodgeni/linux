#include <unistd.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	if(link(argv[1], argv[2]))
		printf("Hard link failed\n");
}
