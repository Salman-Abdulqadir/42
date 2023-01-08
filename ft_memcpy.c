/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulqa <sabdulqa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 18:44:18 by sabdulqa          #+#    #+#             */
/*   Updated: 2023/01/08 11:40:47 by sabdulqa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t	i;

	if (!dst)
		return (NULL);
	i = 0;
	while (i < n)
	{
		*(char *)(dst + i) = *(char *)(src + i);
		i++;
	}
	return (dst);
}

// int main(){
// 	char s1[50] = "Learningisfun";
// 	char s2[50] = "Learningisfun";
// 	char s3[50] = "Learningisfun";
// 	printf("%s\n", memcpy(s1, s3, 3));
// 	printf("%s\n", memmove(s2, s3, 3)); 
// }