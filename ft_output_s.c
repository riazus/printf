/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_output_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jannabel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 18:23:16 by jannabel          #+#    #+#             */
/*   Updated: 2021/11/04 12:31:18 by jannabel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_output_s(va_list ap)
{
	char	*str;

	str = va_arg(ap, char *);
	if (!str)
	{
		ft_putstr_fd("(null)", 1);
		return (6);
	}
	else
	{
		ft_putstr_fd(str, 1);
		return (ft_strlen(str));
	}
}
