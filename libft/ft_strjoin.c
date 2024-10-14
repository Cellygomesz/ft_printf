/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgomes-s <mgomes-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 10:36:52 by mgomes-s          #+#    #+#             */
/*   Updated: 2024/10/12 02:42:09 by mgomes-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s01;
	char	*s02;
	char	*ptr;
	size_t	i;
	size_t	j;

	s01 = (char *)s1;
	s02 = (char *)s2;
	i = 0;
	j = 0;
	if (s01 == NULL || s02 == NULL)
		return (NULL);
	ptr = (char *)malloc((ft_strlen(s01) + ft_strlen(s02)) + 1);
	while (s01[i])
	{
		ptr[i] = s01[i];
		i++;
	}
	while (s02[j])
	{
		ptr[i + j] = s02[j];
		j++;
	}
	ptr[i + j] = '\0';
	return (ptr);
}
