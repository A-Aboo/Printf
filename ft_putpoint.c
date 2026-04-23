/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpoint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anasimi <anasimi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 11:25:23 by anasimi           #+#    #+#             */
/*   Updated: 2026/01/17 10:50:56 by anasimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	put_hex(unsigned long long n)
{
	int	count;

	count = 0;
	if (n >= 16)
		count += put_hex(n / 16);
	count += ft_putchar("0123456789abcdef"[n % 16]);
	return (count);
}

int	ft_putpointer(void *ptr)
{
	unsigned long long	addr;
	int					count;

	if (!ptr)
		return (write(1, "(nil)", 5));
	write(1, "0x", 2);
	count = 2;
	addr = (unsigned long long)ptr;
	count += put_hex(addr);
	return (count);
}
