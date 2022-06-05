/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jannabel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 19:15:16 by jannabel          #+#    #+#             */
/*   Updated: 2021/11/05 19:03:47 by jannabel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include "libft/libft.h"

int	ft_printf(const char *str, ...);
int	ft_sort_arg(const char str, va_list ap);
int	ft_output_c(va_list ap);
int	ft_output_s(va_list ap);
int	ft_output_p(va_list ap);
int	ft_output_i_and_d(va_list ap);
int	ft_output_u(va_list ap);
int	ft_output_x_low(va_list ap);
int	ft_output_x_up(va_list ap);
int	ft_putchar(char c);
int	ft_convert_to_hex(unsigned int n, char *base, int len);
int	ft_putnbr_u(unsigned int n, int len);
int	ft_convert_to_hex_p(size_t n, char *base, int len);

#endif
