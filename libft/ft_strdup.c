/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgomes-s <mgomes-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 09:59:08 by mgomes-s          #+#    #+#             */
/*   Updated: 2024/10/12 02:39:09 by mgomes-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t			i;
	char			*temp;

	i = 0;
	while (s[i])
		i++;
	temp = (char *)malloc((sizeof(char) * i) + 1);
	i = 0;
	if (temp == NULL)
		return (0);
	else
	{
		while (s[i])
		{
			temp[i] = s[i];
			i++;
		}
	}
	temp[i] = '\0';
	return (temp);
}
