/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulqa <sabdulqa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 13:21:31 by sabdulqa          #+#    #+#             */
/*   Updated: 2023/02/24 09:30:50 by sabdulqa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>
#include <string.h>

int	ft_printf(const char *placeholder, ...)
{
	va_list	args;
	int		i;
	int		tempint;
	char	*tempstr;
	char	tempchr;

	va_start(args, placeholder);
	i = 0;
	while (placeholder[i])
	{
		if (placeholder[i] == '%')
		{
			i++;
			if (placeholder[i] == 'd')
			{
				tempint = va_arg(args, int);
				printf("%d", tempint);
			}
			else if (placeholder[i] == 'c')
			{
				tempchr = va_arg(args, char);
				printf("%c/n", tempchr);
			}
			else if (placeholder[i] == 's')
			{
				tempstr = va_arg (args, char  *);
				printf("%s\n", tempstr);
			}
		}
		else
			printf("%c", placeholder[i]);
		i++;
	}
	va_end (args);
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
	while (placeholder[i++])
	{
		if (placeholder[i] != '%')
		{
			counter++;
			ft_putchr(placeholder[i]);
			continue ;
		}
		counter += check_placeholder(placeholder[++i], args)
	}
}

int check_placeholder(char format, args)
{
	if (format == 'c')
		return (print_char(va_arg(args, char)));
	else if (format == 's')
		return (print_str(va_arg(args, char *)));
	else if (format == 'p')
		return (print_ptr(va_arg(args, void *)))
	else if (format == 'i' || format == 'd')
		return (print_int(va_arg(args, int)));
	else if (format == 'x' || format == 'X')
		return (print_hex(va_arg(args, int)));
	else if (format == '%')
		return (print_char('%'))
}


int main(){
	char test = 's';

	printf("%d\n", ft_printf("%d %s %x %d %x", 4564564,  "hgfhgfhgfhgf", -52456456, -56454, 5645645 );
	printf("%d\n",    printf("%d %s %x %d %x", 4564564,  "hgfhgfhgfhgf", -52456456, -56454, 5645645 );
	return 0;
}