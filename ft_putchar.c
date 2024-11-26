/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmeliani <zmeliani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 11:10:41 by zmeliani          #+#    #+#             */
/*   Updated: 2024/11/25 14:31:10 by zmeliani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	unsigned char	cbis;

	cbis = (unsigned char )c;
	write(1, &cbis, 1);
	return (1);
}

void	ft_putchar_void(void *c, int *size)
{
	unsigned char	*cbis;

	cbis = (unsigned char *)c;
	write(1, &cbis, 1);
	*size += 1;
}
