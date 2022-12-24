/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulqa <sabdulqa@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 18:18:08 by sabdulqa          #+#    #+#             */
/*   Updated: 2022/12/24 18:29:53 by sabdulqa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void *ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	
	i = 0;
	while (i < len)
	{
		*(unsigned char*)(b + i) = (unsigned char) c;
		i++;
	}
	
	return (b);
}