/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_decimal.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgomes-s <mgomes-s@42.rio>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 15:37:26 by mgomes-s          #+#    #+#             */
/*   Updated: 2024/10/16 16:17:08 by mgomes-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

unsigned int	ft_decimal(unsigned int n)
{
	unsigned int	result;

	result = 0;
	if (n <= 9)
	{
		n += '0';
		result += ft_putchar(n);
	}
	else
	{
		result += ft_decimal(n / 10);
		result += ft_decimal(n % 10);
	}
	return (result);
}
