/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulqa <sabdulqa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 15:01:28 by sabdulqa          #+#    #+#             */
/*   Updated: 2023/01/08 16:22:04 by sabdulqa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <stdlib.h>


int	ft_atoi(const char *str)
{
	int	c;
	int	i;
	int	is_negative;

	if (!str)
		return (0);
	c = 0;
	i = 0;
	is_negative = 1;
	while (str[i] == ' ' || (str[i] > 8 && str[i] <= 13))
		i++;
	if (str[i] == '-')
		is_negative = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		c = (c * 10) + (str[i] - '0');
		i++;
	}
	return (c * is_negative);
}

// int	main(){
// 	printf("%d\n%d", atoi("2147483649"), ft_atoi("2147483649"));
// }