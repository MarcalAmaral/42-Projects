/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat-test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokogaw <myokogaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 02:27:07 by myokogaw          #+#    #+#             */
/*   Updated: 2023/05/15 19:00:12 by myokogaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bsd/string.h>
#include <stdio.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len;
	size_t	i;

	len = ft_strlen(dst);
	i = 0;
	while (src[i] && (len + 1) < size)
	{0
		dst[len] = src[i];
		len++;
		i++;
	}
	dst[len] = '\0';
	if (size > len)
		return ((len + ft_strlen(src)));
	return ((ft_strlen(src) + size));
}

int	main(void)
{
	char	dest[30];
	char	*src = "AAAAAAAAA";
	char	dest1[30];
	char	*src1 = "AAAAAAAAA";

	/*My function*/
	memset(dest, 'B', 4);
	printf("Before my function\n dst = %s	src = %s\n", dest, src);
	ft_strlcat(dest, src, 6);
	printf("%lu \n", ft_strlen(dest));
	printf("After my function \n dst = %s	src = %s\n", dest, src);
	printf("Retorno da minha Função = %lu\n\n", ft_strlcat(dest, src, 6));
	printf("Resultado da cópia se == 1 Ok! se == 0 errado. \
	Result = %d \n", !strcmp(dest, "BBBBA"));
	/*Original Function*/
	memset(dest1, 'B', 4);
	printf("-----------------------=-----------------------\n");
	printf("Before original function\n dst = %s	src = %s\n", dest1, src1);
	strlcat(dest1, src1, 6);
	printf("%lu \n", ft_strlen(dest1));
	printf("After original function\n dst = %s	src = %s\n", dest1, src1);
	printf("Retorno da função original = %lu\n", strlcat(dest1, src1, 6));
	printf("Resultado da cópia se == 1 Ok! se == 0 errado. \
	Result = %d \n", !strcmp(dest1, "BBBBA"));
}
