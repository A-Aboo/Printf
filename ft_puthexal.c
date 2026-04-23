/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexal.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anasimi <anasimi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 11:05:14 by anasimi           #+#    #+#             */
/*   Updated: 2026/01/17 10:48:02 by anasimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexal(unsigned int a)
{
	int		count;
	char	c;

	count = 0;
	if (a >= 16)
	{
		count += ft_puthexal(a / 16);
		count += ft_puthexal(a % 16);
	}
	else
	{
		c = "0123456789abcdef"[a];
		write(1, &c, 1);
		count++;
	}
	return (count);
}
