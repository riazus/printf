/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_output_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jannabel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 20:34:06 by jannabel          #+#    #+#             */
/*   Updated: 2021/11/04 12:34:01 by jannabel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_output_u(va_list ap)
{
	unsigned int	u;

	u = va_arg(ap, unsigned int);
	return (ft_putnbr_u(u, 0));
}
