/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_xmin.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgomes-s <mgomes-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 10:15:34 by mgomes-s          #+#    #+#             */
/*   Updated: 2024/10/17 15:00:24 by mgomes-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_xmin(int n)
{
	char	c;
	int		pwords;

	pwords = 0;
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	else if (n < 0)
	{
		pwords += ft_putchar('-');
		n = n * -1;
	}
	if (n >= 0 && n <= 9)
	{
		c = n + 48;
		pwords += ft_putchar(c);
	}
	else if (n >= 10 && n <= 15)
	{
		c = n + 87;
		pwords += ft_putchar(c);
	}
	else
	{
		pwords += ft_putnbr_xmin(n / 16);
		pwords += ft_putnbr_xmin(n % 16);
	}
	return (pwords);
}
