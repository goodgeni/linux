#include <unistd.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	execlp("head", "head", argv[1], argv[2], argv[3], (char *)0);
}
