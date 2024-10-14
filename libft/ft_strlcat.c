/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgomes-s <mgomes-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 16:07:58 by mgomes-s          #+#    #+#             */
/*   Updated: 2024/10/03 15:45:56 by mgomes-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	lendst;
	size_t	lensrc;
	size_t	i;
	size_t	allsize;

	i = 0;
	lendst = ft_strlen(dst);
	lensrc = ft_strlen(src);
	allsize = lendst + lensrc;
	if (size <= lendst)
		return (size + lensrc);
	while (src[i] && (lendst + i) < (size - 1))
	{
		dst[lendst + i] = src[i];
		i++;
	}
	dst[lendst + i] = '\0';
	return (allsize);
}
