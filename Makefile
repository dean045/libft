# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: brhajji- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/23 13:28:26 by brhajji-          #+#    #+#              #
#    Updated: 2021/11/23 16:19:57 by brhajji-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC_DIR = ./srcs/
SRCS = ft_strlen.c\
	   ft_isalpha.c\
	   ft_isalnum.c\
	   ft_isascii.c\
	   ft_isdigit.c\
	   ft_isprint.c\
	   ft_memset.c\
	   ft_bzero.c\
	   ft_memcpy.c

OBJS = ${SRCS:.c=.o}
HEAD = libft.h
NAME = libft.a
CC = gcc
RM = rm -f
.c.o:	
	${CC} -Wall -Wextra -Werror -I${HEAD} -c $< -o ${<:.c=.o}
${NAME}: ${OBJS}	
	ar rc ${NAME} ${OBJS}
all : ${NAME}
clean : 
	${RM} ${OBJS}
fclean : clean	
	${RM} ${NAME} 
re : fclean all
.PHONY : all clean fclean re