# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: danielda <danielda@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/14 13:07:45 by danielda          #+#    #+#              #
#    Updated: 2024/10/25 21:54:11 by danielda         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a 
SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_toupper.c ft_tolower.c ft_strlen.c ft_strlcpy.c ft_strlcat.c \
*ft_strchr.c *ft_strrchr.c ft_strncmp.c ft_strnstr.c ft_substr.c ft_strjoin.c ft_strtrim.c **ft_split.c ft_memset.c \
ft_striteri.c ft_strmapi.c *ft_calloc.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_memchr.c
OBJ = $(SRC:.c=.o)
CC = cc 
CFFLAGS = -Wall -Wextra -Werror 

all: $(NAME)

$(NAME): $(OBJ)
		ar rcs $(NAME) $(OBJ)
clean:
		rm -rf $(OBJ)
		
fclean: clean
		rm -rf $(NAME)
		
re: fclean all