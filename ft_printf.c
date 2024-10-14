/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgomes-s <mgomes-s@42.rio>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 15:49:58 by mgomes-s          #+#    #+#             */
/*   Updated: 2024/10/14 16:06:53 by mgomes-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*No arquivo ft_printf.c, comece a implementação da função. O objetivo inicial 
é simplesmente ler e imprimir a string que é passada como argumento, ignorando 
por enquanto os casos especiais como %.

Primeiro, crie uma função simples para percorrer e imprimir os caracteres 
da string, exceto quando encontrar o símbolo %:*/

#include "libftprintf.h"

int	ft_printf(const char *format, ...)
{
	size_t	i;
	char	*fmat;
	int		result;

	i = 0;
	fmat = (char *)format;
	while (fmat[i])
	{
		result[i] =write(1, &fmat[i], 1);
		i++;
	}
	return (result);
}

int	main(void)
{
	ft_printf("ola mundo");
	return (0);
}
