/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulqa <sabdulqa@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 16:31:17 by sabdulqa          #+#    #+#             */
/*   Updated: 2022/12/24 17:40:39 by sabdulqa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strlen (char *s)
{
	int i;

	i = 0;
	while(s[i])
		i++;
	return i;
}

// int main(){
//     printf("%d\n", ft_strlen("salman1234@@@@"));
//     return 0;
// }