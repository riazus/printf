/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jannabel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 11:59:43 by jannabel          #+#    #+#             */
/*   Updated: 2021/11/04 11:59:47 by jannabel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_u(unsigned int n, int len)
{
	if (n >= 10)
	{
		len += ft_putnbr_u(n / 10, len);
		ft_putnbr_u(n % 10, len++);
	}
	if (n >= 0 && n <= 9)
		len += ft_putchar(n + 48);
	return (len);
}
