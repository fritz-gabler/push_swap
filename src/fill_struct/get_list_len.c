/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_list_len.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgabler <mail@student.42heilbronn.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 17:07:17 by fgabler           #+#    #+#             */
/*   Updated: 2023/09/05 23:42:03 by fgabler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_largest_number(t_dubl_list *strct);

void	get_list_len(int *struct_len, t_dubl_list *strct)
{
	*struct_len = get_largest_number(strct);
	ft_printf("%d\n", get_largest_number(strct));
}

int	get_largest_number(t_dubl_list *strct)
{
	int			max_number;
	t_dubl_list	*curent;
	int			guard;

	max_number = INT_MIN;
	guard = true;
	curent = strct;
	while (guard)
	{
		if (max_number < curent->content.split.idx)
			max_number = curent->content.split.idx;
		curent = curent->next;
		if (curent == strct)
			guard = false;
	}
	ft_printf("%d\n", max_number);
	return (max_number - 1);
}
