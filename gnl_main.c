//The return value can be 1, 0 or -1
//depending on whether a line has been read,
//when the reading has been completed, 
//or if an error has happened respectively.

#include "get_next_line.h"

char	*find_line(char *buffer_for_check)
{
	if (ft_strchr(buffer_for_check, '\n') == NULL)
		return(NULL);
	else

}

static	gnl_list	*find_list(int fd, gnl_list **mem_list)
{
	gnl_list *temp;

	temp = *mem_list;
	while(temp)
	{
		if (temp->fd == fd)
		{
			return(temp);
		}
		temp = temp->next;
	}
	if (!(temp = (gnl_list *)malloc(sizeof(gnl_list))))
		return(NULL);
	if (!(temp->fd = (int *)malloc(sizeof(int))))
		return(NULL);
	if (!(temp->data = ft_strnew(0)))
		return(NULL);
	temp->fd = fd;
	temp->next = *mem_list;
	*mem_list = temp;
	return(temp);
}

int	get_next_line(int fd, char **line)
{
        char    	buffer[BUFF_SIZE + 1];
	static gnl_list	*memory_lists;
	int i;

	i = 0;
	if (fd < 0 || !line || read(fd, buffer, BUFF_SIZE) < 0)
		return (-1);
	buffer[BUFF_SIZE] = '\0';
//	ft_strccpy(*line, buffer, '\n');
	if (find_line(find_list(fd, &memory_lists->data)) == NULL)
	{
		while(find_line(find_list(fd, &memory_lists->data)))
		{
			ft_strrejoin(&memory_lists->data, buffer);
			find_line(memory_lists->data);
			read(fd, buffer, BUFF_SIZE);
			buffer[BUFF_SIZE]= '\0';
		}
	}
	if ()
-		;
-
-
}

int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		int 	fd;
		int	fd2;
		char	*line;
		char	*line2;

		line = ft_strnew(BUFF_SIZE);
		line2 = ft_strnew(BUFF_SIZE);
		fd = open("text.txt", O_RDONLY);
		fd2 = open("text2.txt", O_RDONLY);
		if (argv[1][0] == 'a')
		{
			printf("%d %d\n", fd, fd2);
			get_next_line(fd, &line);
			get_next_line(fd2, &line2);
			printf("%s\n%s \n", line, line2);
			/*while (get_next_line(fd, &line) > 0)
			{
				get_next_line(fd, &line);
				printf("%s", line);
			}
			printf("%s", "EOF");*/
		}
		else
		{
			return(0);
		}
	}
	return(0);
}
