/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulqa <sabdulqa@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 16:39:02 by sabdulqa          #+#    #+#             */
/*   Updated: 2022/12/24 17:40:54 by sabdulqa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return c - 32;
	return c;
}

// int main(){
//     printf("%d\n", ft_toupper('a'));
//     return 0;
// }