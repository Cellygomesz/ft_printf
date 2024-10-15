/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgomes-s <mgomes-s@42.rio>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 15:49:58 by mgomes-s          #+#    #+#             */
/*   Updated: 2024/10/15 11:48:40 by mgomes-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*mplemente uma função simples que apenas lida com a leitura de 
 * uma string e imprime o que não é %.*/
/*
#include "libftprintf.h"

char	wrt(void *string)
{
	int		i;
	int		j;
	char	*str;
	char	*result;
	
	i = 0;
	j = 0;
	str = (char *)string;
	while (str[i])
	{
		if (str[i] == '%')
		{
			while (str[i] == '%' && str[i] != ' ')
				i++;
		}
		result[j] = write(1, &str[i], 1);
		i++;
		j++;
	}
	return (result);
}




/*int	ft_printf(const char *format, ...)
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

#include <stdio.h>
int	main(void)
{
	printf("%s\n", wrt("oi"));
	return (0);
}*/


#include <stdio.h>

int  get_arg(va_list *ap, char c)
{
    if (c == '1')
    return (printf("%s", va_arg(*ap, char *)));
  if (c == '2')
        return (printf("%d", va_arg(*ap, int)));
  return (0);
}

void  printd(char *str, ...)
{
    va_list ap;
  int      i;

  i = 0;
  va_start(ap, str);
  while (str[i])
  {
    if (str[i] == '1' || str[i] == '2')
      get_arg(&ap, str[i]);
    else
      printf("%c", str[i]);
    i++;
  }
  va_end(ap);
}

int  main(void)
{
    printd("azul 1 de temperatura 2", "e uma cor", 6500);
}
