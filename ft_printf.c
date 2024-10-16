/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgomes-s <mgomes-s@42.rio>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 15:49:58 by mgomes-s          #+#    #+#             */
/*   Updated: 2024/10/16 15:24:42 by mgomes-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_handle_conversion(char c, va_list args)
{
	if (c == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (c == 'd' || c == 'i')
		return (ft_putnbr(va_arg(args, int)));
	else if (c == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (c == '%')
		return (ft_putchar('%'));
	else if (c == 'p')
		return (/*|||||||||*/(va_arg(args, int)));
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
			pchar += ft_handle_conversion(format[++i], args);
		else
			pchar += ft_putchar(format[i]);
		i++;
	}
	va_end(args);
	return (pchar);
}

int main(void)
{
	ft_printf("Hello %s, we are in the year of %d", "Celly", 2024);
	return (0);
}
