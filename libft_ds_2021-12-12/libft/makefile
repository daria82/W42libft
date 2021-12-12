# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mstroeva <mstroeva@student.42wolfsburg.de> +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/07 10:48:02 by mstroeva          #+#    #+#              #
#    Updated: 2021/12/10 23:04:27 by mstroeva         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a
FLAGS = -Wall -Werror -Wextra

SRC=\
ft_isalnum.c\
ft_isalpha.c\
ft_isascii.c\
ft_isdigit.c\
ft_isprint.c\
ft_tolower.c\
ft_toupper.c\
ft_strlen.c\
ft_strchr.c\
ft_strrchr.c\
ft_strncmp.c\
ft_strlcpy.c\
ft_strlcat.c\
ft_strnstr.c\
ft_memset.c\
ft_bzero.c\
ft_memcpy.c\
ft_memmove.c\
ft_memcmp.c\
ft_memchr.c\
ft_atoi.c\
ft_calloc.c\
ft_strdup.c\
ft_substr.c\
ft_strjoin.c\
ft_strtrim.c\
ft_split.c\
ft_itoa.c\
ft_strmapi.c\
ft_striteri.c\
ft_putchar_fd.c\
ft_putstr_fd.c\
ft_putendl_fd.c\
ft_putnbr_fd.c\


OBJ=$(SRC:.c=.o)

CFLAGS= -Wall -Wextra -Werror

RM= rm -f



all: $(NAME)
$(NAME): $(OBJ)
	@ar rcs $(NAME) $(OBJ)



clean:
	${RM} ${OBJ}

fclean: clean
	${RM} $(NAME) 

re: fclean all 
#?