/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokogaw <myokogaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 23:09:45 by myokogaw          #+#    #+#             */
/*   Updated: 2023/05/12 00:13:39 by myokogaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	main(void)
{
	int				i;
	unsigned char	c;

	i = -300;
	printf("%d \n", i);
	c = (char) i;
	printf("%d \n", c);
	return (0);
}
