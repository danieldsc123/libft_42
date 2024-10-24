# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: danielda <danielda@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/14 13:07:45 by danielda          #+#    #+#              #
#    Updated: 2024/10/23 20:16:43 by danielda         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a #defina o nome do arquivo que vai ser gerado
SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_toupper.c ft_tolower.c ft_strlen.c ft_strlcpy.c ft_strlcat.c *ft_strchr.c *ft_strrchr.c ft_strncmp.c ft_strnstr.c ft_substr.c ft_strjoin.c ft_strtrim.c **ft_split.c ft_memset.c ft_striteri.c ft_strmapi.c *ft_calloc.c ft_bzero.c
OBJ = $(SRC:.c=.o)
CC = gcc #especifica o compilador que sera utilazado
CFFLAGS = -Wall -Wextra -Werror #flags que serao usadas na hora da compilaçao 

#regras
all: $(NAME) #depende da criaçao do arquivo $(name) nesse caso, libft.a

#$(NAME):
$(NAME): $(OBJ)
		ar rcs $(NAME) $(OBJ)
clean:
		rm -rf $(OBJ)
		
fclean: clean
		rm -rf $(NAME)
		
re: fclean all