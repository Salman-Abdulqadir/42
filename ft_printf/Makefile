# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sabdulqa <sabdulqa@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/21 12:40:19 by sabdulqa          #+#    #+#              #
#    Updated: 2023/02/24 09:58:59 by sabdulqa         ###   ########.fr        #
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
				ar rcs $(NAME)  $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)


.PHONY:			all clean fclean re bonus










# DIRSRC		= ./srcs/



# DIROBJ		= ./objs/

# DIRLIB		= ./libft/

# SRC			= ft_printf parser writer formater formater_d formater_u formater_x formater_c formater_s formater_p formater_pe

# SRCS		= $(addprefix ${DIRSRC}, $(addsuffix .c, ${SRC}))

# HEAD		= ./headers/ 

# OBJS		= ${SRCS:.c=.o}

# NAME		= libftprintf.a

# NAMELFT		= libft.a

# CC			= gcc
# RM			= rm -f
# AR			= ar rc
# RN			= ranlib

# CFLAGS		= -Wall -Wextra -Werror

# .c.o:
# 			${CC} ${CFLAGS} -c -I${DIRINC} -I${DIRLIB} $< -o ${<:.c=.o}

# $(NAME):	${OBJS}
# 			cd ${DIRLIB} && ${MAKE} && cp -v ${NAMELFT} ../${NAME}
# 			${AR} ${NAME} ${OBJS}
# 			${RN} ${NAME}

# main:		$(NAME)
# 			${CC} -I ${DIRINC} -I ${DIRLIB} ${NAME} main.c

# all:		$(NAME)

# clean:
# 			${RM} ${OBJS}
# 			cd ${DIRLIB} && ${MAKE} clean

# fclean:		clean
# 			${RM} $(NAME)
# 			cd ${DIRLIB} && ${MAKE} fclean

# re:			fclean all

# .PHONY:		all clean fclean re
