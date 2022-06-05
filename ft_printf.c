/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jannabel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 18:19:47 by jannabel          #+#    #+#             */
/*   Updated: 2021/11/05 19:03:36 by jannabel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int		len;

	len = 0;
	if (!str)
		return (0);
	va_start(ap, str);
	while (*str)
	{
		if (*str == 37)
		{
			str++;
			len += ft_sort_arg(*str, ap);
		}
		else
		{
			ft_putchar_fd(*str, 1);
			len++;
		}
		str++;
	}
	va_end(ap);
	return (len);
}
