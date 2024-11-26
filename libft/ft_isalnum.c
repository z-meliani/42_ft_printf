/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmeliani <zmeliani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 10:21:38 by zmeliani          #+#    #+#             */
/*   Updated: 2024/11/17 12:09:57 by zmeliani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	c = (unsigned char)c;
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);
}
