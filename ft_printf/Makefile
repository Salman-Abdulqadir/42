# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sabdulqa <sabdulqa@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/21 12:40:19 by sabdulqa          #+#    #+#              #
#    Updated: 2023/02/28 15:59:02 by sabdulqa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIBFT = libft/libft.a

NAME = libftprintf.a

SRCS =  src/print_hex.c src/print_int.c src/print_str.c src/print_ptr.c src/print_unsigned.c ft_printf.c
		
CC = gcc

CFLAGS = -c -Wall -Wextra -Werror

INCLUDES = -I./includes

OBJS = $(SRCS:.c=.o)

$(NAME): $(OBJS)
	$(MAKE) -C ./libft
	cp libft/libft.a $(NAME)
	ar -rcs $(NAME) $(OBJS)

all : $(NAME)

clean :
	$(MAKE) clean -C ./libft
	rm -rf $(SURPL_O) 
	rm -rf $(OBJS)

fclean : clean
	$(MAKE) fclean -C ./libft
	rm -rf $(NAME)

re : fclean all
