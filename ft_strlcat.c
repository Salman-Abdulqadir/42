/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulqa <sabdulqa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 12:14:04 by sabdulqa          #+#    #+#             */
/*   Updated: 2023/01/08 13:38:12 by sabdulqa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = ft_strlen(dst) + 1;
	if (dstsize <= ft_strlen(dst))
		return (dstsize + ft_strlen(src));
	while (j < dstsize - 1 && src[i])
	{
		dst[j] = src[i];
		i++;
		j++;
	}	
	dst[j] = '\0';
	return (ft_strlen(dst) + i);
}


int	main()
{
	char *str = " world!";
	char dest[100] = "Hello";

	ft_strlcat(dest, str, 100);
	
	printf("%s", dest);
}