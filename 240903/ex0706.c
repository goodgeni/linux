#include <unistd.h>

int main()
{
	execl("a.out", "apple", "option", (char *)0);
}
