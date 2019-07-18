# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dholiday <dholiday@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/08 16:19:04 by dholiday          #+#    #+#              #
#    Updated: 2019/07/02 19:50:02 by dholiday         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS = all_types.c convert.c find_null_d_sharp.c format.c ft_atoi.c ft_bzero.c ft_itoa.c ft_memalloc.c \
ft_memccpy.c ft_memchr.c ft_memcpy.c ft_memmove.c ft_memset.c ft_printf.c ft_putchar.c ft_strcat.c \
ft_strchr.c ft_strcpy.c ft_strdel.c ft_strdup.c ft_strjoin.c ft_strlen.c ft_strncat.c ft_strncpy.c \
ft_strnew.c helper_2.c helpers.c info.c new_printf.c null.c sharp.c swap_str.c type_f.c wide_dioux.c \
wide_p.c wide_s.c

FLAGS = -Wall -Wextra -Werror

INCLUDES = ft_printf.h libft.h

FILESO = $(SRCS:.c=.o)

.PHONY: all clean fclean re

all: $(NAME)

$(NAME):
	gcc -c $(FLAGC) -I $(INCLUDES) $(SRCS) 
	ar rc $(NAME) $(FILESO)

clean:
	/bin/rm -f $(FILESO)

fclean: clean
	/bin/rm -f $(FILESO)
	/bin/rm -f $(NAME)

re: fclean all
