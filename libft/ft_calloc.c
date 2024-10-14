/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgomes-s <mgomes-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 18:46:41 by mgomes-s          #+#    #+#             */
/*   Updated: 2024/10/12 02:37:46 by mgomes-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	allsize;
	void	*ptr;

	allsize = nmemb * size;
	if (nmemb == 0 || size == 0)
		return (ft_calloc(1, 1));
	if ((allsize / nmemb) != size)
		return (NULL);
	ptr = (char *)malloc(allsize);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, allsize);
	return ((void *)ptr);
}
