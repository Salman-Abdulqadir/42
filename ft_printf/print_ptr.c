/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_ptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulqa <sabdulqa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 16:22:30 by sabdulqa          #+#    #+#             */
/*   Updated: 2023/02/26 17:02:41 by sabdulqa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_ptr(void *ptr)
{
	unsigned int	ptr_address;
	int				count;

	count = 0;
	ptr_address = (unsigned int) &ptr;
	count += print_str("0x");
	count += print_hex(ptr_address, 'x');
	return (count);
}
