/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexau.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anasimi <anasimi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 11:10:53 by anasimi           #+#    #+#             */
/*   Updated: 2026/01/17 12:15:38 by anasimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexau(unsigned int a)
{
	int		count;
	char	c;

	count = 0;
	if (a >= 16)
	{
		count += ft_puthexau(a / 16);
		count += ft_puthexau(a % 16);
	}
	else
	{
		c = "0123456789ABCDEF"[a];
		write(1, &c, 1);
		count++;
	}
	return (count);
}
