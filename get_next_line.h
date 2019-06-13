/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbruen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 19:09:16 by dbruen            #+#    #+#             */
/*   Updated: 2019/06/13 19:18:16 by dbruen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include "libft.h"
# include <fcntl.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <stdio.h>

# define BUFF_SIZE 20

typedef struct		gnl_list
{
	int				fd;
	char			*data;
	struct gnl_list	*next;
}					g_list;

int					get_next_line(const int fd, char **line);

#endif
