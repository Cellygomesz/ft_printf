/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgomes-s <mgomes-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 17:25:28 by mgomes-s          #+#    #+#             */
/*   Updated: 2024/10/12 02:36:39 by mgomes-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	lens;
	char	*ptrs;

	ptrs = (char *)s;
	lens = ft_strlen(ptrs);
	while (lens > 0)
	{
		if (ptrs[lens] == (char)c)
			return (ptrs + lens);
		lens--;
	}
	if (ptrs[0] == (char)c)
		return (ptrs);
	return (NULL);
}
