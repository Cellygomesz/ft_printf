/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgomes-s <mgomes-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 15:49:58 by mgomes-s          #+#    #+#             */
/*   Updated: 2024/10/17 15:00:12 by mgomes-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_conversion(char c, va_list args)
{
	if (c == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (c == 'd' || c == 'i')
		return (ft_putnbr(va_arg(args, int)));
	else if (c == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (c == 'p')
		return (ft_point(va_arg(args, void *)));
	else if (c == 'u')
		return (ft_decimal(va_arg(args, int)));
	else if (c == 'x')
		return (ft_putnbr_xmin(va_arg(args, int)));
	else if (c == 'X')
		return (ft_putnbr_xmax(va_arg(args, int)));
	else
		return (ft_putchar('%'));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int	i;
	int	pchar;

	i = 0;
	pchar = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
			pchar += ft_conversion(format[++i], args);
		else
			pchar += ft_putchar(format[i]);
		i++;
	}
	va_end(args);
	return (pchar);
}
