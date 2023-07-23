/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokogaw <myokogaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 21:27:00 by myokogaw          #+#    #+#             */
/*   Updated: 2023/05/10 21:31:20 by myokogaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	*a = "Hello World!";
	char	*init;
	char	*h = "Hello World!";
	int		i;

	i = strlen(h);
	h += i;
	while (*h)
	{
		printf("%c \n", *h);
		h--;
	}
	init = &*a;
	printf("%c \n", *init);
	printf("%p \n", a);
	printf("%s \n", a - 1);
	a += 5;
	printf("%s \n", a);
	return (0);
}
