/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_to_hex.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jannabel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 20:31:53 by jannabel          #+#    #+#             */
/*   Updated: 2021/11/04 12:30:11 by jannabel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_convert_to_hex(unsigned int n, char *base, int len)
{
	if (n >= 16)
		len += ft_convert_to_hex(n / 16, base, len);
	if (n % 16 <= 9)
		len += ft_putchar(n % 16 + '0');
	else
		len += ft_putchar(base[n % 16]);
	return (len);
}
