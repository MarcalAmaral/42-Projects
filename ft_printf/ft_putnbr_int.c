/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_int.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokogaw <myokogaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 21:45:48 by myokogaw          #+#    #+#             */
/*   Updated: 2023/07/21 23:20:51 by myokogaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_int(long int n)
{
	int			ret;

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
