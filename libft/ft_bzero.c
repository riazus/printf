/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bzero.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jannabel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 18:58:44 by jannabel          #+#    #+#             */
/*   Updated: 2021/10/10 13:47:15 by jannabel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*s_buf;

	s_buf = (unsigned char *)s;
	while (n > 0)
	{
		*s_buf = '\0';
		s_buf++;
		n--;
	}
}
