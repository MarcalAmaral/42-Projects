/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokogaw <myokogaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 21:35:21 by myokogaw          #+#    #+#             */
/*   Updated: 2023/06/26 20:08:32 by myokogaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>
#include "get_next_line.h"

char	*read_function(int fd, char *lake, char *buffer)
{
	int		bytes_read;

	bytes_read = read(fd, buffer, BUFFER_SIZE);
	while (bytes_read > 0)
	{
		if (bytes_read < 0)
			return (NULL);
		if (!lake)
			lake = ft_strdup("");
		if (!buffer)
			return (NULL);
		buffer[bytes_read] = '\0';
		lake = ft_strjoin(lake, buffer);
		if (ft_strchr(lake, '\n'))
			break ;
		bytes_read = read(fd, buffer, BUFFER_SIZE);
	}
	return (lake);
}

char	*clean_lake(char *lake)
{
	char	*str;
	char	*temp;
	int		i;
	int		j;

	temp = lake;
	if (ft_strchr(lake, '\n'))
	{
		lake = ft_strchr(lake, '\n') + 1;
		if (!*lake)
		{
			free(temp);
			return (NULL);
		}
	}
	else
		return (NULL);
	str = malloc((ft_strlen(lake) + 1) * sizeof(char));
	i = 0;
	j = 0;
	while (lake[i])
		str[j++] = lake[i++];
	str[j] = lake[i];
	free(temp);
	return (str);
}

char	*get_next_line(int fd)
{
	static char	*lake;
	char		*line;
	char		*buffer;

	if (fd < 0 || read(fd, 0, 0) < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buffer = (char *) malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buffer)
		return (NULL);
	lake = read_function(fd, lake, buffer);
	line = get_line(lake);
	lake = clean_lake(lake);
	if (buffer)
		free(buffer);
	if (!line)
	{
		free(line);
		return (NULL);
	}
	return (line);
}

// int	main(void)
// {
// 	char	*s;
// 	int		fd;

// 	fd = open("file.txt", O_RDONLY);
// 	s = get_next_line(fd);
// 	printf("%s", s);
// 	free(s);
// 	s = get_next_line(fd);
// 	printf("%s", s);
// 	free(s);
// 	s = get_next_line(fd);
// 	printf("%s", s);
// 	free(s);
// 	s = get_next_line(fd);
// 	printf("%s", s);
// 	free(s);
// 	close(fd);
// 	return (0);
// }
