# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sabdulqa <sabdulqa@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/08 13:59:37 by sabdulqa          #+#    #+#              #
#    Updated: 2023/02/24 09:54:59 by sabdulqa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			=	ft_putchar_fd.c ft_itoa.c  ft_putendl_fd.c  ft_putnbr_fd.c \
					ft_putstr_fd.c  ft_strlen.c
OBJS			= $(SRCS:.c=.o)



CC				= gcc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror -c

NAME			= libft.a

all:			$(NAME)

$(NAME):		$(OBJS)
				ar rcs $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)


.PHONY:			all clean fclean re bonus