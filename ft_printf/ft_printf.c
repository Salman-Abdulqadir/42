/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulqa <sabdulqa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 13:21:31 by sabdulqa          #+#    #+#             */
/*   Updated: 2023/01/21 16:55:50 by sabdulqa         ###   ########.fr       */
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
			else if (placeholder[i] == 's')
			{
				tempstr = va_arg (args, char*);
				printf("%s\n", tempstr);
			}
		}
		else
			printf("%c", placeholder[i]);
		i++;
	}
	va_end (args);
	return 0;
}


int main(){
	char * test = "salman";
	
	ft_printf("my name is %d%232%", 1234);
	return 0;
}