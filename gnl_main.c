#include "get_next_line.h"

int	main()
{
	int 	fd;
	char	*line;

	fd = open(text.txt, O_RONLY);
	while (get_next_line(fd, &line) > 0)
	{
		get_next_line(fd, &line);
		printf("%s", line);
	}
	printf("%s", "EOF");
	return(0);
}
