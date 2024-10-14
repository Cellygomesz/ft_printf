/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgomes-s <mgomes-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 13:25:49 by mgomes-s          #+#    #+#             */
/*   Updated: 2024/10/12 02:23:40 by mgomes-s         ###   ########.fr       */
/*                             '                                              */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*s01;
	unsigned char	*s02;

	i = 0;
	s01 = (unsigned char *)s1;
	s02 = (unsigned char *)s2;
	while (i < n)
	{
		if (s01[i] != s02[i])
			return (s01[i] - s02[i]);
		i++;
	}
	return (0);
}
