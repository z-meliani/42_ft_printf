/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_printf.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmeliani <zmeliani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 16:37:53 by zmeliani          #+#    #+#             */
/*   Updated: 2024/11/25 19:35:33 by zmeliani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

#include "ft_printf.h"

int	main(void)
{
	char	*str = "c -> %c\ns -> %s\np -> %p\nd -> %d\ni -> %i\nu -> %u\nx -> %x\nX -> %X\n% -> %%\n";
	char	*sent = "Python !!!";
	char	c = 'W';
	long	pt = 9876543210;
	void	*pt0 = &pt;
	int	len;

	printf("-------- printf / ft_printf--------\n");
	len = printf(str, c, sent, pt, pt, pt, pt, pt, pt);
	printf("len --> %d\n\n", len);
	len = ft_printf(str, c, sent, pt, pt, pt, pt, pt, pt);
	ft_printf("len --> %d\n\n", len);
	printf("-------- printf / ft_printf (NULL) --------\n");
	len = printf(str, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL);
	printf("len --> %d\n\n", len);
	len = ft_printf(str, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL);
	ft_printf("len --> %d\n\n", len);
	printf("-------- printf / ft_printf (EMPTY) --------\n");
	len = printf(0);
	printf("len --> %d\n\n", len);
	len = ft_printf(0);
	ft_printf("len --> %d\n\n", len);
	ft_printf("------- mix test -------\n");
	printf("%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%%%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %c%%", 'A', "42", 42, 42 ,42 , 42, 42, 'B', "-42", -42, -42 ,-42 ,-42, 42,'C', "0", 0, 0 ,0 ,0, 42, 0);
	printf("\n");
	ft_printf("%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%%%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %c%%", 'A', "42", 42, 42 ,42 , 42, 42, 'B', "-42", -42, -42 ,-42 ,-42, 42,'C', "0", 0, 0 ,0 ,0, 42, 0);
}
