/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokogaw <myokogaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 23:21:54 by myokogaw          #+#    #+#             */
/*   Updated: 2023/07/21 23:52:47 by myokogaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
