/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_un.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anasimi <anasimi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 11:22:43 by anasimi           #+#    #+#             */
/*   Updated: 2026/01/17 10:48:02 by anasimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_un(unsigned int a)
{
	char	b;
	int		count;

	count = 0;
	if (a <= 9)
	{
		b = a + '0';
		write(1, &b, 1);
		count++;
	}
	else
	{
		count += ft_putnbr_un(a / 10);
		count += ft_putnbr_un(a % 10);
	}
	return (count);
}
