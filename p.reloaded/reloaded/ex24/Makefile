# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anmendes <anmendes@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/16 12:07:11 by anmendes          #+#    #+#              #
#    Updated: 2024/10/17 12:41:56 by anmendes         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
# VARIÁVEIS
CC	=	cc
CFLAGS	=	-Wall -Wextra -Werror -I.  # -I. para incluir o diretório atual
NAME	=	libft.a
SOURCES	=	ft_putchar.c ft_putstr.c ft_strlen.c ft_strcmp.c ft_swap.c
SDIR	=	srcs
OBJ	=	$(patsubst %.c, $(SDIR)/%.o, $(SOURCES)) # adiciona o prefixo do diretório

# COMANDOS
all: $(NAME) # libft.a

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

$(SDIR)/%.o: $(SDIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean: 
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
