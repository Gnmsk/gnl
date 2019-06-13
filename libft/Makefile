# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dbruen <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/02/25 22:32:41 by dbruen            #+#    #+#              #
#    Updated: 2019/02/25 22:32:52 by dbruen           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SOURCE = ./ft_*.c
OBJ = ./ft_*.o
FLAG = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	@ gcc $(FLAG) -c $(SOURCE)
	@ ar rc $(NAME) $(OBJ)
	@ ranlib $(NAME)

clean:
	@ rm -f $(OBJ)

fclean: clean
	@ rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re
