/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgomes-s <mgomes-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 13:31:59 by mgomes-s          #+#    #+#             */
/*   Updated: 2024/10/17 16:05:11 by mgomes-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
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
	else
	{
		pwords += ft_putnbr(n / 10);
		pwords += ft_putnbr(n % 10);
	}
	return (pwords);
}
