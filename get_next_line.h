#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

#include "libft.h"
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>

# define BUFF_SIZE 20

typedef struct	gnl_list
{
	int		fd;
	char		*data;
	struct gnl_list	*next;
}		gnl_list;

#endif
