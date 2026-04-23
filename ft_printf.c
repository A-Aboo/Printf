/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anasimi <anasimi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 10:44:06 by anasimi           #+#    #+#             */
/*   Updated: 2026/01/17 16:20:55 by anasimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_print_arg(va_list ap, char spec)
{
	if (spec == 'c')
		return (ft_putchar(va_arg(ap, int)));
	else if (spec == 's')
		return (ft_putstr(va_arg(ap, char *)));
	else if (spec == 'p')
		return (ft_putpointer(va_arg(ap, void *)));
	else if (spec == 'd' || spec == 'i')
		return (ft_putnbr(va_arg(ap, int)));
	else if (spec == 'u')
		return (ft_putnbr_un(va_arg(ap, unsigned int)));
	else if (spec == 'x')
		return (ft_puthexal(va_arg(ap, unsigned int)));
	else if (spec == 'X')
		return (ft_puthexau(va_arg(ap, unsigned int)));
	else if (spec == '%')
		return (ft_putchar('%'));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		count;
	int		i;

	if (!format)
		return (-1);
	va_start(ap, format);
	count = 0;
	i = 0;
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1])
		{
			count += ft_print_arg(ap, format[i + 1]);
			i++;
		}
		else if (format[i] == '%' && !format[i + 1])
			break ;
		else
			count += ft_putchar(format[i]);
		i++;
	}
	va_end(ap);
	return (count);
}
