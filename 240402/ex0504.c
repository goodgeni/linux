#include <sys/types.h>
#include <dirent.h>
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
	DIR *dirp;
	struct dirent *dentry;	

	if((dirp=opendir("."))==NULL)
	{
		fprintf(stderr, "Error\n");
		exit(1);
	}

	while(dentry = readdir(dirp)){
		if(dentry->d_ino!=0)
			printf("%s\n", dentry->d_name);
	}
	closedir(dirp);
}
