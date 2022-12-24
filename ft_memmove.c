/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulqa <sabdulqa@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 19:00:01 by sabdulqa          #+#    #+#             */
/*   Updated: 2022/12/24 20:17:00 by sabdulqa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void *ft_memmove(void *dst, const void *src, size_t len)
{
	int	i;

	if(!dst || !src)
		return (NULL);
	
	if (dst > src)
	{
		i = (int)len - 1;
		while (i >= 0)
		{
			*(char*)(dst + i) = *(char*)(src + i);
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < (int)len)
		{
			*(char*)(dst + i) = *(char*)(src + i);
			i++;
		}
	}
	return (dst);
	
}

// int main(){
// 	char s1[50] = "Learningisfun";
// 	char s2[50] = "Learningisfun";
// 	char s3[50] = "Learningisfun";
	
// 	printf("%s\n", memmove(s1, s3, 3));
// 	printf("%s\n", ft_memmove(s2, s3, 3)); 
// }