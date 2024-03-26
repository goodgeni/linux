#include <stdio.h>

int main(int argc, char *argv[])
{
	FILE *fp;
	char buffer[1024];
	int nread, cnt, numChar = 0;
	
	fp = fopen(argv[1], "r");

	while((nread = fread(buffer, 1024, 1, fp)) > 0)
	{
		for(cnt = 0; cnt < nread; cnt++)
		{
			if((buffer[cnt] >= 'a' && buffer[cnt] <= 'z') ||
					(buffer[cnt] >= 'A' && buffer[cnt] <= 'Z'))
				numChar++;
		}
		
	}
	fclose(fp);
	printf("number of alphabet character is %d\n", numChar);
}
