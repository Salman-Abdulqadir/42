/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulqa <sabdulqa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 18:18:29 by sabdulqa          #+#    #+#             */
/*   Updated: 2023/01/08 18:31:34 by sabdulqa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*result;

	result = malloc(size);
	if (!result || count == SIZE_MAX || size == SIZE_MAX)
		return (NULL);
	ft_bzero(result, count);
	return (result);
}
