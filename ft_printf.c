/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmeliani <zmeliani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 12:01:34 by zmeliani          #+#    #+#             */
/*   Updated: 2024/11/25 16:15:20 by zmeliani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		i;
	int		printlen;

	va_start(ap, format);
	printlen = 0;
	i = 0;
	while (format[i])
	{
		if (format[i] == '%' && ft_strchr("cspdiuxX%", format[i + 1]) != 0)
		{
			if (format[i + 1] != '%')
				printlen += ft_call(format[i + 1], va_arg(ap, void *));
			else if (format[i + 1] == '%')
				printlen += ft_putchar(format[i + 1]);
			i += 2;
		}
		else
		{
			printlen += ft_putchar(format[i]);
			i++;
		}
	}
	va_end(ap);
	return (printlen);
}
