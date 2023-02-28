/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulqa <sabdulqa@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 13:21:31 by sabdulqa          #+#    #+#             */
/*   Updated: 2023/02/27 17:51:54 by sabdulqa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	check_placeholder(char format, va_list args)
{
	if (format == 'c')
	{
		ft_putchar_fd(va_arg(args, int), 1);
		return (1);	
	}
	else if (format == 's')
		return (print_str(va_arg(args, char *)));
	else if (format == 'p')
		return (print_ptr(va_arg(args, void *)));
	else if (format == 'i' || format == 'd')
		return (print_int(va_arg(args, int)));
	else if (format == 'x' || format == 'X')
		return (print_hex((unsigned int) va_arg(args, int), format));
	else if (format == '%')
	{
		ft_putchar_fd('%', 1);
		return (1);	
	}
	return (0);
}

int	ft_printf(const char *placeholder, ...)
{
	va_list	args;
	int		counter;
	int		i;

	va_start(args, placeholder);
	i = 0;
	counter = 0;
	while (placeholder[i])
	{
		if (placeholder[i] != '%')
		{
			counter++;
			ft_putchar_fd(placeholder[i], 1);
			i++;
			continue ;
		}
		counter += check_placeholder(placeholder[++i], args);
		i++;
	}
	return (counter);
}

#include <stdio.h>
int main(){
	ft_printf("%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %c%%", 'A', "42", 42, 42 ,42 , 42, 42, 'B', "-42", -42, -42 ,-42 ,-42, 42, 'C', "0", 0, 0 ,0 ,0, 42, 0);
	return 0;
}