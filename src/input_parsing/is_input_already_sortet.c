/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_input_already_sortet.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgabler <mail@student.42heilbronn.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 14:20:03 by fgabler           #+#    #+#             */
/*   Updated: 2023/09/07 01:40:45 by fgabler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_input_already_sortet(t_dubl_list **lst)
{
	int			guard;
	int			i;
	t_dubl_list	*current;

	current = *lst;
	guard = true;
	i = 0;
	while (guard)
	{
		if (current->content.split.idx != i)
			return (false);
		current = current->next;
		if (current == *lst)
			guard = false;
		i++;
	}
	return (true);
}
