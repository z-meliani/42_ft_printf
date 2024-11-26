/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_type.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmeliani <zmeliani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 16:43:06 by zmeliani          #+#    #+#             */
/*   Updated: 2024/11/25 12:43:01 by zmeliani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	*base_convert(char c)
{
	if (c == 'p' || c == 'x')
		return ("0123456789abcdef");
	else if (c == 'X')
		return ("0123456789ABCDEF");
	return ("0123456789");
}

void	ft_putnbr_int(int nbr, char type, int *size)
{
	int		digit;
	char	*base;
	int		len_base;

	*size += 1;
	base = base_convert(type);
	len_base = ft_strlen(base);
	if (nbr / len_base == 0 && nbr % len_base < 0)
	{
		write(1, "-", 1);
		*size += 1;
	}
	if (nbr / len_base != 0)
		ft_putnbr_int(nbr / len_base, type, size);
	if (nbr < 0)
		digit = base[-(nbr % len_base)];
	else
		digit = base[(nbr % len_base)];
	write(1, &digit, 1);
}

void	ft_putnbr_pointer(size_t nbr, int *size)
{
	size_t	digit;
	char	*base;
	size_t	len_base;

	if (!nbr)
	{
		write(1, "(nil)", 5);
		*size += 5;
		return ;
	}
	*size += 1;
	base = base_convert('p');
	len_base = ft_strlen(base);
	if (nbr / len_base == 0)
	{
		write(1, "0x", 2);
		*size += 2;
	}
	if (nbr / len_base != 0)
		ft_putnbr_pointer(nbr / len_base, size);
	digit = base[(nbr % len_base)];
	write(1, &digit, 1);
}

void	ft_putnbr_unsigned(unsigned int nbr, char type, int *size)
{
	unsigned int	digit;
	char			*base;
	unsigned int	len_base;

	*size += 1;
	base = base_convert(type);
	len_base = ft_strlen(base);
	if (nbr / len_base == 0 && nbr % len_base < 0)
		write(1, "-", 1);
	if (nbr / len_base != 0)
		ft_putnbr_unsigned(nbr / len_base, type, size);
	digit = base[(nbr % len_base)];
	write(1, &digit, 1);
}
