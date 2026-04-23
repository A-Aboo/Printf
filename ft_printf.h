/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anasimi <anasimi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 10:37:55 by anasimi           #+#    #+#             */
/*   Updated: 2026/01/18 09:44:30 by anasimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_puthexal(unsigned int a);
int		ft_putstr(char *str);
int		ft_printf(const char *format, ...);
int		ft_putnbr(int a);
int		ft_putnbr_un(unsigned int n);
int		ft_puthexau(unsigned int n);
int		ft_putchar(char c);
int		ft_putpointer(void *ptr);
void	show(double v);

#endif
