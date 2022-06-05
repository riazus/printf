/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_to_hex_p.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jannabel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 18:57:29 by jannabel          #+#    #+#             */
/*   Updated: 2021/11/05 18:58:58 by jannabel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_convert_to_hex_p(size_t n, char *base, int len)
{
	if (n >= 16)
		len += ft_convert_to_hex_p(n / 16, base, len);
	if (n % 16 <= 9)
		len += ft_putchar(n % 16 + '0');
	else
		len += ft_putchar(base[n % 16]);
	return (len);
}
