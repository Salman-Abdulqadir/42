/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulqa <sabdulqa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 14:43:22 by sabdulqa          #+#    #+#             */
/*   Updated: 2023/01/17 21:05:08 by sabdulqa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*pointer;

	i = 0;
	pointer = 0;
	while (s[i])
	{
		if (s[i] == (unsigned char) c)
			pointer = (char *)(s + i);
		i++;
	}
	if (s[i] == c)
		pointer = (char *)(s + i);
	return (pointer);
}
