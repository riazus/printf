/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_output_i_and_d.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jannabel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 18:38:49 by jannabel          #+#    #+#             */
/*   Updated: 2021/11/02 18:55:08 by jannabel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_output_i_and_d(va_list ap)
{
	int		n;
	int		len;
	char	*str;

	n = va_arg(ap, int);
	str = ft_itoa(n);
	if (!str)
		return (0);
	ft_putstr_fd(str, 1);
	len = ft_strlen(str);
	free(str);
	return (len);
}
