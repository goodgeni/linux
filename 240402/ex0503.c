#include <sys/types.h>
#include <dirent.h>
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
	DIR *dirp;
	if((dirp=opendir(argv[1]))==NULL)
	{
		fprintf(stderr, "Error\n");
		exit(1);
	}
	closedir(dirp);
}
