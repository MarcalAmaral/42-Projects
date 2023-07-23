/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokogaw <myokogaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 22:08:10 by myokogaw          #+#    #+#             */
/*   Updated: 2023/06/26 19:25:47 by myokogaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 100000
# endif

# include <unistd.h>
# include <stdlib.h>

char	*clean_lake(char *lake);
char	*ft_strdup(char *s);
char	*get_next_line(int fd);
char	*ft_strchr(char *s1, int c);
char	*ft_strjoin(char *s1, char *s2);
char	*get_line(char *lake);
size_t	ft_strlen(char *s);
char	*read_function(int fd, char *lake, char *buffer);

#endif