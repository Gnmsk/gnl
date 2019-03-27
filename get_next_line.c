#include "get_next_line.h"

//Замолочить буфер под read
//Прочитать из дескриптора в буфер
//Чекнуть буфер на \n \0
//Перенести в line
//Замолочить массив в структуре под остаток
//Перенести остаток в структуру (СТАТИК)

int		get_next_line(const int fd, char **line)
{
	char	*buffer;
	char	*memory_data;	// для структуры
	int	memory_fd;   
	temp_list memory; // структура для остатков

	buffer = ft_newstr(BUFF_SIZE + 1);
	if (buffer == NULL)
		return (-1);
	// read (fd, buffer, BUFF_SIZE) returning 0,-1, or sucseed readed bites (chars)
}

temp_list	*ft_newstruct(int fd, char *data) // Не готово
{
	temp_list *new;

	if(!(new = (temp_list*)malloc(sizeof(temp_list))))
		return (NULL);
	if (fd == NULL || data == NULL)
	{
		free(new);
		return (NULL);
	}
	else
	{
		if (!(new->fd =)  /*доделать замолачивание
				    данных под номер дикриптера
				    и содержание *дата */
	}
	new->next = NULL;
	return (new);
}


