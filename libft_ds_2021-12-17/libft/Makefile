# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mstroeva <mstroeva@student.42wolfsburg.de> +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/07 10:48:02 by mstroeva          #+#    #+#              #
#    Updated: 2021/12/17 21:34:34 by mstroeva         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		= gcc
CFLAGS	= -Wall -Werror -Wextra

AR		= ar rcs
RM		= rm -f

NAME	= libft.a

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

BONUS=\
ft_lstnew.c\
ft_lstadd_front.c\
ft_lstsize.c\
ft_lstlast.c\
ft_lstadd_back.c\
ft_lstdelone.c\
ft_lstclear.c\
ft_lstiter.c\
ft_lstmap.c\


OBJ	=		$(SRC:.c=.o)

BONUS_O	=	$(BONUS:.c=.o)

all:		$(NAME)
$(NAME):	$(OBJ)
			$(AR) $(NAME) $(OBJ)

bonus:		$(BONUS_O)
			$(AR) $(NAME) $(BONUS_O)

clean:
			${RM} ${BONUS_O} ${OBJ}

fclean: clean
			${RM} $(NAME) 

re: fclean all 
.PHONY: all clean fclean re