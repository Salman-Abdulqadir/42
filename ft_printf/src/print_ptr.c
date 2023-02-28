/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_ptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulqa <sabdulqa@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 16:22:30 by sabdulqa          #+#    #+#             */
/*   Updated: 2023/02/27 17:12:18 by sabdulqa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	print_ptr(void *ptr)
{
	unsigned long long	ptr_address;
	int				count;

	count = 0;
	ptr_address = (unsigned long long) ptr;
	count += print_str("0x");
	count += print_hex(ptr_address, 'x');
	return (count);
}
