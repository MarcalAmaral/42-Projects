/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokogaw <myokogaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 21:40:53 by myokogaw          #+#    #+#             */
/*   Updated: 2023/07/22 17:07:43 by myokogaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int	ft_printf(const char *format, ...);
int	ft_putnbr_int(long int n);
int	ft_putnbr_p(unsigned long int n);
int	ft_arg_check(va_list list, const char flag);
int	ft_putchar(const char c);
int	ft_putstr(const char *str);
int	ft_putnbr_hex(unsigned int n, char c);

int	ft_printf(const char *format, ...)
{
	va_list	list;
	int		i;
	int		ret;

	if (!format)
		return (-1);
	va_start(list, format);
	i = 0;
	ret = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			while (format[i] == ' ')
				i++;
			ret += ft_arg_check(list, format[i]);
			i++;
		}
		else
			ret += ft_putchar(format[i++]);
	}
	return (ret);
}

int	ft_putstr(const char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
		return (write(1, "(null)", 6));
	while (str[i] != '\0')
		i += write(1, &str[i], 1);
	return (i);
}

int	ft_putchar(const char c)
{
	return (write(1, &c, 1));
}

int	ft_putnbr_int(long int n)
{
	int	ret;

	ret = 0;
	if (n < 0)
	{
		n *= -1;
		ret += ft_putchar('-');
	}
	if (n >= 10)
		ret += ft_putnbr_int(n / 10);
	ret += ft_putchar(n % 10 + '0');
	return (ret);
}

int	ft_putnbr_p(unsigned long int n)
{
	int	ret;

	ret = 0;
	if (n == 0)
		return (ft_putstr("(nil)"));
	if (n >= 16)
		ret += ft_putnbr_p(n / 16);
	if (ret == 0)
		ret += write(1, "0x", 2);
	ret += ft_putchar(HEX_LOW[n % 16]);
	return (ret);
}

int	ft_putnbr_hex(unsigned int n, char c)
{
	int	ret;

	ret = 0;
	if (n >= 16)
		ret += ft_putnbr_hex(n / 16, c);
	if (c == 'x')
		ret += ft_putchar(HEX_LOW[n % 16]);
	else if (c == 'X')
		ret += ft_putchar(HEX_UPP[n % 16]);
	return (ret);
}

int	ft_putnbr_unsigned_int(unsigned int n)
{
	int	ret;

	ret = 0;
	if (n >= 10)
		ret += ft_putnbr_unsigned_int(n / 10);
	ret += ft_putchar((n % 10) + '0');
	return (ret);
}

int	ft_arg_check(va_list list, const char flag)
{
	int	ret;

	ret = 0;
	if (flag == 'c')
		ret += ft_putchar(va_arg(list, int));
	if (flag == 's')
		ret += ft_putstr(va_arg(list, char *));
	if (flag == 'p')
		ret += ft_putnbr_p(va_arg(list, unsigned long int));
	if (flag == 'd')
		ret += ft_putnbr_int(va_arg(list, int));
	if (flag == 'i')
		ret += ft_putnbr_int(va_arg(list, int));
	if (flag == 'u')
		ret += ft_putnbr_unsigned_int(va_arg(list, unsigned int));
	if (flag == 'x')
		ret += ft_putnbr_hex(va_arg(list, unsigned int), flag);
	if (flag == 'X')
		ret += ft_putnbr_hex(va_arg(list, unsigned int), flag);
	if (flag == '%')
		ret += ft_putchar('%');
	return (ret);
}

int	main(void)
{
	printf("%d \n", ft_printf(" %p ",(void *) 0));
	printf("%d \n", printf(" %p ", (void *) 0));
}
