/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_xmax.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgomes-s <mgomes-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 13:05:44 by mgomes-s          #+#    #+#             */
/*   Updated: 2024/10/17 23:28:16 by mgomes-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_xmax(unsigned int n)
{
	char	c;
	int		pwords;

	pwords = 0;
	if (n <= 9)
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
