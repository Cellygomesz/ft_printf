/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgomes-s <mgomes-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 15:28:15 by mgomes-s          #+#    #+#             */
/*   Updated: 2024/10/12 02:45:19 by mgomes-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	sum(int n)
{
	int	i;

	i = 0;
	if (n == -2147483648)
		return (11);
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*result;
	int		len;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = sum(n);
	result = (char *)ft_calloc((len + 1), 1);
	if (n < 0)
	{
		n *= -1;
		result[0] = '-';
	}
	while (--len >= 0)
	{
		if (result[len] == '-')
			break ;
		result[len] = n % 10 + '0';
		n /= 10;
	}
	return (result);
}
