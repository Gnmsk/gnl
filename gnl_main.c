//The return value can be 1, 0 or -1
//depending on whether a line has been read,
//when the reading has been completed, 
//or if an error has happened respectively.
//zc – свернуть блок
//zo – развернуть блок
//zM – закрыть все блоки
//zR – открыть все блоки
#include "get_next_line.h"

int	memory_request(char *memory)
{
	if (ft_strchr(memory, '\n'))
	{
		return (1);
	}
	if (ft_strchr(memory, '\0'))
		return (0);
	return (NULL);
}

void	find_line(char **memory, char **line)
{
	int	i;

	i = 0;
	while (*(memory[i]) != '\0' && *(memory[i] != '\n'))
		i++;
	*line = ft_strnew[i];
//Нужно из мемори вырезать (скопировать + удалить скопированную область)
// кусок строки и переместить его в лайн, перед этим, как я понимаю, нужно замолочить лайн
// под размер вырезаемого куска, затем указатель мемори перенести на новое место.
	
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

	while (memory_request(find_list(fd, &memory_lists)-> data) == NULL)
	{
		if (fd < 0 || !line || read(fd, buffer, BUFF_SIZE) < 0)
			return (-1);
		buffer[BUFF_SIZE] = '\0';
		if (ft_strrejoin(&memory_lists -> data, buffer))
		{
			return (-1);
		}
	}
	if (memory_request(find_list(fd, &memory_lists)-> data) == 1)
	{
		return (1);
	}
	if (memory_request(find_list(fd, &memory_lists)-> data) == 0)
	{
		return (0);
	}
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
			while (get_next_line(fd, &line) > 0)
			{
				get_next_line(fd, &line);
				printf("%s", line);
			}
			printf("%s", "EOF");
		}
		else
		{
			return(0);
		}
	}
	return(0);
}
