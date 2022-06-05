/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_output_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jannabel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 20:33:38 by jannabel          #+#    #+#             */
/*   Updated: 2021/11/04 12:33:52 by jannabel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_output_p(va_list ap)
{
	void	*p;

	p = va_arg(ap, void *);
	ft_putstr_fd("0x", 1);
	return (ft_convert_to_hex_p((size_t)p, "0123456789abcdef", 0) + 2);
}
