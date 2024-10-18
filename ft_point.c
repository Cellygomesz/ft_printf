/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_point.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgomes-s <mgomes-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 14:00:35 by mgomes-s          #+#    #+#             */
/*   Updated: 2024/10/18 10:04:05 by mgomes-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	aux(unsigned long num)
{
	int	count;

	count = 0;
	if (num >= 16)
		count += aux(num / 16);
	count += ft_putchar("0123456789abcdef"[num % 16]);
	return (count);
}

int	ft_point(void *ptr)
{
	int				len;
	unsigned long	adress;

	adress = (unsigned long)ptr;
	len = 0;
	if (ptr == NULL)
		return (ft_putstr("(nil)"));
	len += ft_putstr("0x");
	len += aux(adress);
	return (len);
}
