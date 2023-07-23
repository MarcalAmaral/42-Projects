/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokogaw <myokogaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 21:41:26 by myokogaw          #+#    #+#             */
/*   Updated: 2023/07/22 00:08:10 by myokogaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# define HEX_LOW "0123456789abcdef"
# define HEX_UPP "0123456789ABCDEF"

int	ft_printf(const char *format, ...);
int	ft_putnbr_int(long int n);
int	ft_putnbr_hex(unsigned int n, char c);
int	ft_putnbr_p(unsigned long int n);
int	ft_putnbr_unsigned_int(unsigned int n);
int	ft_putstr(const char *str);
int	ft_putchar(const char c);
int	ft_arg_check(va_list list, const char flag);

#endif