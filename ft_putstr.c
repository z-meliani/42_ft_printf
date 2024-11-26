/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmeliani <zmeliani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 11:13:23 by zmeliani          #+#    #+#             */
/*   Updated: 2024/11/25 13:25:05 by zmeliani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char *s, int *size)
{
	int	len_s;

	if (!s)
	{
		write(1, "(null)", 6);
		*size += 6;
		return ;
	}
	len_s = ft_strlen(s);
	*size = len_s;
	write(1, s, len_s);
}
