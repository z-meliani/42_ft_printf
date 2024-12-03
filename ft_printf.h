/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmeliani <zmeliani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 13:28:55 by zmeliani          #+#    #+#             */
/*   Updated: 2024/11/27 11:36:42 by zmeliani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <stdarg.h>

char	*ft_strchr(const char *s, int c);

int		ft_printf(const char *format, ...);

size_t	ft_strlen(const char *s);

void	call_format(char c, va_list ap, int *size);
void	ft_putchar(char c, int *size);
void	ft_putstr(char *s, int *size);
void	ft_putnbr_int(int nbr, char type, int *size);
void	ft_putnbr_pointer(size_t nbr, int *size);
void	ft_putnbr_unint(unsigned int nbr, char type, int *size);

#endif