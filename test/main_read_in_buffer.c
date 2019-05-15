#include "incl.h"
#include "libft.h"

void    read_buffer(int fd, char **line)
{
        int     size = 10;
        char    buffer[size + 1];

        read(fd, buffer, size);
        buffer[size] = '\0';
        strcpy(*line, buffer);
}

int	main()
{
	int fd;
	char *line;

	line = ft_strnew(11);
	fd = open("text.txt", O_RDONLY);
	read_buffer(fd, &line);
	printf("%s", line);
	return (0);
}
