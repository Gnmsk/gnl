#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int	main()
{
	int fd;

	fd = open("text.txt", O_RDONLY);
	printf("%d", fd);
}
