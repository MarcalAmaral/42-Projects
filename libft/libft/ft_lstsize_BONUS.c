/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_BONUS.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myokogaw <myokogaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 21:31:40 by myokogaw          #+#    #+#             */
/*   Updated: 2023/07/07 21:37:40 by myokogaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	if (!lst)
		return (0);
	i = -1;
	while (i++, lst)
		lst = lst->next;
	return (i);
}