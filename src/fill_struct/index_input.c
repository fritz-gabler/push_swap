/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgabler <mail@student.42heilbronn.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 11:16:55 by fgabler           #+#    #+#             */
/*   Updated: 2023/09/05 16:58:38 by fgabler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	set_every_index_to_zero(t_dubl_list **lst);
static void	index_smalest_number(t_dubl_list **lst, int index);

void	index_input(t_dubl_list **lst)
{
	t_dubl_list *current;
	int			guard;
	int			index;

	current = *lst;
	guard = true;
	index = 0;
	set_every_index_to_zero(lst);
	while (guard)
	{
		index_smalest_number(lst, index);
		index++;
		current = current->next;
		if (current == *lst)
		{
			guard = false;
		}
	}
	current = *lst;
	guard = true;

}

static void	set_every_index_to_zero(t_dubl_list **lst)
{
	t_dubl_list *current;
	int			guard;

	current = *lst;
	guard = true;
	while (guard)
	{
		current->content.split.idx = 0;
		current = current->next;
		if (current == *lst)
			guard = false;
	}
}

static void	index_smalest_number(t_dubl_list **lst, int index)
{
	t_dubl_list	*current;
	t_dubl_list	*min_index;
	int			min;
	int			guard;

	current = *lst;
	min = INT_MAX;
	guard = true;
	min_index = NULL;
	while (guard)
	{
		if ((current->content.split.val) < min
			&& (current->content.split.idx == 0))
		{
			min = current->content.split.val;
			min_index = current;
		}
		current = current->next;
		if (current == *lst)
			guard = false;
	}
	min_index->content.split.idx = index;
}
