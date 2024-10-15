/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgomes-s <mgomes-s@42.rio>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 15:49:58 by mgomes-s          #+#    #+#             */
/*   Updated: 2024/10/14 21:07:24 by mgomes-s         ###   ########.fr       */
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
	int		i;
	char	*fmat;
	int		result;

	while (format[i])
	{
		if (format[i] != '%')
		{
			write(1, &format[i], 1);
			count++;
		}
		else
		{
			i++;

		}
	}
	return ((int)result);
}

int	main(void)
{
	ft_printf("ola mundo");
	return (0);
}
