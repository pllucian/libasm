# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pllucian <pllucian@21-school.ru>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/30 15:58:05 by pllucian          #+#    #+#              #
#    Updated: 2021/05/12 22:55:28 by pllucian         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_strlen.s ft_strcpy.s ft_strcmp.s ft_write.s ft_read.s ft_strdup.s

OBJS = $(SRCS:.s=.o)

INCL = libasm.h

NAME = libasm.a

AS = nasm

ASFLAGS = -f elf64

CC = gcc

CFLAGS = -Wall -Wextra -Werror

AR = ar rcs

RM = rm -f

%.o:		%.s
			$(AS) $(ASFLAGS) $< -o $@

$(NAME):	$(OBJS)
			$(AR) $(NAME) $(OBJS)

all:		$(NAME)

test:		$(NAME) $(INCL) main.c
			$(CC) $(CFLAGS) main.c -L. -lasm -o test_libasm

clean:
			$(RM) $(OBJS)
			$(RM) main.o

fclean:		clean
			$(RM) $(NAME)
			$(RM) test_libasm

re:			fclean all

.PHONY:		all test clean fclean re
