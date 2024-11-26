/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmeliani <zmeliani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 13:28:55 by zmeliani          #+#    #+#             */
/*   Updated: 2024/11/25 14:30:30 by zmeliani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "libft/libft.h"
# include <stdarg.h>

int		ft_call(char c, void *ap);
int		ft_intlen(int n);
int		ft_printf(const char *format, ...);
int		ft_putchar(char c);

void	ft_putchar_void(void *c, int *size);
void	ft_putstr(char *s, int *size);
void	ft_putnbr_int(int nbr, char type, int *size);
void	ft_putnbr_pointer(size_t nbr, int *size);
void	ft_putnbr_unsigned(unsigned int nbr, char type, int *size);

#endif