/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd_test.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokogaw <myokogaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 21:05:00 by myokogaw          #+#    #+#             */
/*   Updated: 2023/05/18 21:09:17 by myokogaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//# Test 0 #

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	*r;
	int		i;
	int		ncpy;

	ncpy = n;
	if (n < 0)
		n *= -1;
	i = 0;
	while (i++, ncpy != 0)
		ncpy = ncpy / 10;
	*(r + 1) = '\0';
	while (i--, (n / 10) != 0)
	{
		r[i] = (n % 10) + 48;
		n = n / 10;
	}
	r[i] = n + 48;
	r[i - 1] = '-';
	ft_putstr_fd(r, fd);
}

//# End Test 0 #


//# Test1 #
#include "libft.h"

static int	ft_intlen(int n);
static int	ft_modulusreverse(int nbr);

void	ft_putnbr_fd(int n, int fd)
{
	char	*r;
	int		i;
	int		ncpy;

	i = -1;
	ncpy = n;
	if (n < 0)
		n *= -1;
	while (i++, n != 0)
	{
		if (i == 0 && ncpy < 0)
			write(fd, "-", 1);
		printf("%d \n", ft_modulusreverse(ft_intlen(n)));
		ncpy = n / (ft_modulusreverse(ft_intlen(n))) % 10 + 48;
		write(fd, &ncpy, 1);
		n = n / 10;
	}
}

static int	ft_modulusreverse(int nbr)
{
	int		i;
	int		modulusvalue;

	i = (int) nbr;
	modulusvalue = 1;
	while (i--, i != 0)
		modulusvalue *= 10;
	return (modulusvalue);
}

static int	ft_intlen(int n)
{
	int	i;

	i = -1;
	while (i++, n != 0)
		n = n / 10;
	return (i);
}

int	main(void)
{
	int	v;

	printf("%d \n", 123 / 10);
	v = -123456;
	ft_putnbr_fd(v, 1);
	return (0);
}

//# End Test 1 #