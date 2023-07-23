/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokogaw <myokogaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 22:07:52 by myokogaw          #+#    #+#             */
/*   Updated: 2023/07/08 22:06:05 by myokogaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strdup(char *s)
{
	size_t	i;
	size_t	lenght;
	char	*n_string;

	i = 0;
	lenght = ft_strlen(s);
	n_string = (char *) malloc((lenght + 1) * sizeof(char));
	if (!n_string)
		return (n_string);
	while (i != lenght)
	{
		n_string[i] = s[i];
		i++;
	}
	n_string[i] = '\0';
	return (n_string);
}

char	*ft_strchr(char *lake, int c)
{
	size_t	i;

	i = 0;
	if (lake == NULL)
		return (NULL);
	while (lake[i] != '\0')
	{
		if (lake[i] == c)
			return ((lake + i));
		i++;
	}
	return (NULL);
}

size_t	ft_strlen(char *s)
{
	size_t	count;

	count = 0;
	while (*s && s[count] != '\0')
		count++;
	return (count);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*ret;
	size_t	lens1;
	size_t	lens2;
	size_t	i;
	size_t	j;

	if (!s1 && !s2)
		return (NULL);
	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	ret = (char *) malloc((lens1 + lens2 + 1) * sizeof(char));
	if (!ret)
		return (NULL);
	i = 0;
	while (i < lens1)
	{
		ret[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < lens2)
		ret[i++] = s2[j++];
	ret[i] = '\0';
	free(s1);
	return (ret);
```}

char	*get_line(char *lake)
{
	char	*line;
	int		i;
	int		j;

	i = 0;
	if (!lake)
		return (NULL);
	while (lake[i] != '\n' && lake[i] != '\0')
		i++;
	if (lake[i] == '\n')
		i++;
	line = malloc((i + 1) * sizeof(char));
	if (!line)
		return (NULL);
	i = 0;
	j = 0;
	while (lake[i] != '\n' && lake[i] != '\0')
		line[j++] = lake[i++];
	line[i] = lake[i];
	if (line[i] != '\0')
		line[++i] = '\0';
	return (line);
}
