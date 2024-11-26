/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_call.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmeliani <zmeliani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 18:53:42 by zmeliani          #+#    #+#             */
/*   Updated: 2024/11/25 14:24:48 by zmeliani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_call(char c, void *ap)
{
	int	size;

	size = 0;
	if (c == 'c')
		ft_putchar_void(ap, &size);
	else if (c == 's')
		ft_putstr(ap, &size);
	else if (c == 'p')
		ft_putnbr_pointer((size_t)ap, &size);
	else if (c == 'd' || c == 'i')
		ft_putnbr_int((size_t)ap, c, &size);
	else if (c == 'u' || c == 'x' || c == 'X')
		ft_putnbr_unsigned((size_t)ap, c, &size);
	return (size);
}
