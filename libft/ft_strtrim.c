/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgomes-s <mgomes-s@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 10:01:58 by mgomes-s          #+#    #+#             */
/*   Updated: 2024/10/12 02:43:01 by mgomes-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;

	i = 0;
	j = ft_strlen(s1) - 1;
	while (i <= j && ft_strchr(set, s1[i]))
		i++;
	while (j >= i && ft_strchr(set, s1[j]))
		j--;
	if (((j - i) + 1) == 0)
		return (ft_strdup(""));
	return (ft_substr(s1, i, (j - i) + 1));
}
