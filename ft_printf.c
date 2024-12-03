/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmeliani <zmeliani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 12:01:34 by zmeliani          #+#    #+#             */
/*   Updated: 2024/11/27 10:33:12 by zmeliani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	call_format(char c, va_list ap, int *size)
{
	if (c == 'c')
		ft_putchar(va_arg(ap, int), size);
	else if (c == 's')
		ft_putstr(va_arg(ap, char *), size);
	else if (c == 'p')
		ft_putnbr_pointer(va_arg(ap, size_t), size);
	else if (c == 'd' || c == 'i')
		ft_putnbr_int(va_arg(ap, size_t), c, size);
	else if (c == 'u' || c == 'x' || c == 'X')
		ft_putnbr_unint(va_arg(ap, size_t), c, size);
	else if (c == '%')
		ft_putchar(c, size);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		i;
	int		printlen;

	if (!format)
		return (-1);
	va_start(ap, format);
	printlen = 0;
	i = 0;
	while (format[i])
	{
		if (format[i] == '%' && ft_strchr("cspdiuxX%", format[i + 1]) != 0)
		{
			call_format(format[i + 1], ap, &printlen);
			i += 2;
		}
		else
		{
			ft_putchar(format[i], &printlen);
			i++;
		}
	}
	va_end(ap);
	return (printlen);
}
