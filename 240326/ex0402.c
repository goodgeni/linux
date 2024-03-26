#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main(int argc, char **argv)
{
	int fd;
	mode_t oldmask;

	oldmask = umask(023);

	fd = open(argv[1], O_CREAT, 0777);
	close(fd);
}
