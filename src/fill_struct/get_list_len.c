/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_list_len.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgabler <mail@student.42heilbronn.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 17:07:17 by fgabler           #+#    #+#             */
/*   Updated: 2023/09/06 13:42:31 by fgabler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	cont_list_len(t_dubl_list *strct);

void	get_list_len(int *struct_len, t_dubl_list *strct)
{
	*struct_len = cont_list_len(strct);
}

static int	cont_list_len(t_dubl_list *strct)
{
	t_dubl_list	*curent;
	int			guard;
	int			len;

	guard = true;
	curent = strct;
	len = 0;
	while (guard)
	{
		curent = curent->next;
		len++;
		if (curent == strct)
			guard = false;
	}
	return (len);
}
