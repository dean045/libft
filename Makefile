# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: brhajji- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/23 13:28:26 by brhajji-          #+#    #+#              #
#    Updated: 2021/11/24 13:42:13 by brhajji-         ###   ########.fr        #
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
	   ft_memcpy.c\
	   ft_memmove.c\
	   ft_strlcpy.c\
	   ft_strlcat.c\
	   ft_toupper.c\
	   ft_tolower.c\
	   ft_strchr.c\
	   ft_strrchr.c\
	   ft_strncmp.c\
	   ft_memchr.c\
	   ft_memcmp.c\
	   ft_strnstr.c

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
