/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgomes-s <mgomes-s@42.rio>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 15:44:02 by mgomes-s          #+#    #+#             */
/*   Updated: 2024/10/17 11:10:53 by mgomes-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_PRINTF_H
# define LIBFT_PRINTF_H

#include <unistd.h>
#include <stdarg.h>

int				ft_printf(const char *format, ...);
int 			ft_putchar(char c);
int 			ft_putnbr(int n);
int 			ft_putstr(char *s);
unsigned int	ft_decimal(unsigned int n);
int				ft_putnbr_xmin(int n);

#endif
