#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

#include "libft.h"

# define BUFF_SIZE 10

typedef struct	gnl_list
{
	int		fd;
	char		*data;
	struct gnl_list	*next;
	struct gnl_list *prev;
}		temp_list;

#endif
