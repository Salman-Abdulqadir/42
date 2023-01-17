/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulqa <sabdulqa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 17:38:02 by sabdulqa          #+#    #+#             */
/*   Updated: 2023/01/17 20:29:43 by sabdulqa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	b;
	int		i;

	b = (char)c;
	i = 0;
	if (b == '\0')
		return ((char *)s + ft_strlen(s));
	while (s[i])
	{
		if (b == s[i])
		{
			return ((char *)s + i);
		}
		i++;
	}
	return (NULL);
}

// int	main()
// {
// 	printf("%s\n", ft_strchr("salman", 's'));
// 	return 0;
// }