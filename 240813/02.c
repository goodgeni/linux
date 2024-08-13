#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

int main()
{
	int filedes;
//	char pathname[] = "temp.txt";

/*filedes = creat(pathname, 0644);*/

                   /* "temp0.txt" 상대경로  */
	if((filedes = open("/home/kang/linux2/linux/240813/temp0.txt", O_EXCL | O_CREAT | O_RDWR, 0644))==-1)
	{
		printf("file open error!\n");
		exit(1);
	}

	close(filedes);
}
