/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokogaw <myokogaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 19:28:37 by myokogaw          #+#    #+#             */
/*   Updated: 2023/05/10 22:27:10 by myokogaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*s1;

	s1 = (char *) s + ft_strlen(s);
	while (s1 >= s)
	{
		if (*s1 == (char) c)
			return ((char *)s1);
		s1--;
	}
	return (NULL);
}

int	main(void)
{
	char s[] = "tripouille";
	char s2[] = "ltripouiel";
	char s3[] = "";

	printf("%s \n", ft_strrchr(s, 't'));
	printf("%p \n", ft_strrchr(s, 't'));
	printf("%s \n", strrchr(s, 't'));
	printf("%p \n", strrchr(s, 't'));
	return (0);
}
