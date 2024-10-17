/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_xmax.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgomes-s <mgomes-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 13:05:44 by mgomes-s          #+#    #+#             */
/*   Updated: 2024/10/17 16:40:06 by mgomes-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_xmax(int n)
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
		c = n + 55;
		pwords += ft_putchar(c);
	}
	else
	{
		pwords += ft_putnbr_xmax(n / 16);
		pwords += ft_putnbr_xmax(n % 16);
	}
	return (pwords);
}
#include <stdio.h>
int main(void)
{
	printf(" %x \n", 0);
	printf(" %x \n", -1);
	printf(" %x \n", 1);
	printf(" %x \n", 9);
	printf(" %x \n", 10);
	printf(" %x \n", 11);
	printf(" %x \n", 15);
	printf(" %x \n", 16);
	printf(" %x \n", 17);
	printf(" %x \n", 99);
	printf(" %x \n", 100);
	printf(" %x \n", 101);
	printf(" %x \n", -9);
	printf(" %x \n", -10);
	printf(" %x \n", -11);
	printf(" %x \n", -14);
	printf(" %x \n", -15);
	printf(" %x \n", -16);
	printf(" %x \n", -99);
	printf(" %x \n", -100);
	printf(" %x \n", -101);
	printf(" %x \n", INT_MAX);
	printf(" %x \n", INT_MIN);
	printf(" %x \n", LONG_MAX);
	printf(" %x \n", LONG_MIN);
	printf(" %x \n", UINT_MAX);
	printf(" %x \n", ULONG_MAX);
	printf(" %x \n", 9223372036854775807LL);
	printf(" %x %x %x %x %x %x %x \n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf(" %x \n", 42);
	printf(" %x \n", -42);
	return (0);
