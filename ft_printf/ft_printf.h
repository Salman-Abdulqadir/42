/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulqa <sabdulqa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 13:42:44 by sabdulqa          #+#    #+#             */
/*   Updated: 2023/02/26 17:09:27 by sabdulqa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include "./libft/libft.h"
# include <stdarg.h>

int	print_char(char c);
int	print_hex(unsigned int n, char type);
int	print_int(int c);
int	print_str(char *str);
int	print_ptr(void *ptr);

#endif