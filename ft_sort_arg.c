/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_arg.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jannabel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 19:36:21 by jannabel          #+#    #+#             */
/*   Updated: 2021/11/02 18:39:43 by jannabel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_sort_arg(const char str, va_list ap)
{
	int	len;

	len = 0;
	if (str == 'c')
		len = ft_output_c(ap);
	else if (str == 's')
		len = ft_output_s(ap);
	else if (str == 'p')
		len = ft_output_p(ap);
	else if (str == 'd' || str == 'i')
		len = ft_output_i_and_d(ap);
	else if (str == 'u')
		len = ft_output_u(ap);
	else if (str == 'x')
		len = ft_output_x_low(ap);
	else if (str == 'X')
		len = ft_output_x_up(ap);
	else if (str == '%')
		len = ft_putchar('%');
	return (len);
}
