#include "get_next_line.h"
#include "libft.h"

static char		*get_line(char **curr_data)
{
	char	*res;
	char	*temp;
	size_t	i;

	i = 0;
	if (!(temp = ft_strdup(*curr_data)))
		return (NULL);
	while (temp[i] != '\n' && temp[i])
		i++;
	if (!(res = ft_strnew(i)))
		return (NULL);
	ft_strncpy(res, *curr_data, i);
	ft_strdel(curr_data);
	if (i < ft_strlen(temp))
	{
		if (!(*curr_data = ft_strdup(temp + i + 1)))
			return (NULL);
	}
	else
	{
		if (!(*curr_data = ft_strdup("\0")))
			return (NULL);
	}
	ft_strdel(&temp);
	return (res);
}

static char		*ft_strjoinfree(char **curr_data, char *buf)
{
	char	*res;
	size_t	i;

	i = ft_strlen(*curr_data) + ft_strlen(buf);
	if (!(res = ft_strnew(i)))
		return (NULL);
	ft_strcpy(res, *curr_data);
	ft_strcat(res, buf);
	ft_strdel(curr_data);
	return (res);
}

static gnl_list	*find_fd(gnl_list **mem_list, int fd)
{
	gnl_list	*temp;

	temp = *mem_list;
	while (temp)
	{
		if (temp->fd == fd)
			return (temp);
		temp = temp->next;
	}
	if (!(temp = (gnl_list *)malloc(sizeof(gnl_list))))
		return (NULL);
	if (!(temp->data = ft_strnew(0)))
		return (NULL);
	temp->fd = fd;
	temp->next = *mem_list;
	*mem_list = temp;
	return (temp);
}

int				get_next_line(const int fd, char **line)
{
	static gnl_list	*mem_list;
	gnl_list			*curr;
	char			buf[BUFF_SIZE + 1];
	int				ret;

	if (fd < 0 || !line || read(fd, buf, 0) < 0)
		return (-1);
	if (!(curr = find_fd(&mem_list, fd)))
		return (-1);
	ret = 0;
	while (!(ft_strchr(curr->data, '\n')) &&
			(ret = read(fd, buf, BUFF_SIZE)) > 0)
	{
		buf[ret] = '\0';
		if (!(curr->data = ft_strjoinfree(&curr->data, buf)))
			return (-1);
		if (ft_strchr(buf, '\n'))
			break ;
	}
	if (ret < BUFF_SIZE && !(ft_strlen(curr->data)))
		return (0);
	if (!(*line = get_line(&curr->data)))
		return (-1);
	return (1);
}


