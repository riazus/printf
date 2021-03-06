/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_output_x_up.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jannabel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 20:33:16 by jannabel          #+#    #+#             */
/*   Updated: 2021/11/04 12:33:02 by jannabel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_output_x_up(va_list ap)
{
	size_t	n;

	n = va_arg(ap, size_t);
	return (ft_convert_to_hex(n, "0123456789ABCDEF", 0));
}
