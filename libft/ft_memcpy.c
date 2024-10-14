/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgomes-s <mgomes-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 15:21:43 by mgomes-s          #+#    #+#             */
/*   Updated: 2024/10/07 15:26:59 by mgomes-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	char				*ptr;
	const char			*ptr2;

	i = 0;
	ptr = (char *)dest;
	ptr2 = (const char *)src;
	while (i < n)
	{
		ptr[i] = ptr2[i];
		i++;
	}
	return (dest);
}
