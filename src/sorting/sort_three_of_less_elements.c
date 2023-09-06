/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three_of_less_elements.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgabler <mail@student.42heilbronn.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 16:57:00 by fgabler           #+#    #+#             */
/*   Updated: 2023/09/06 18:17:47 by fgabler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_tree_elements(t_stack **stack);
void	sort_tow_elements(t_stack **stack);

void	sort_three_or_less_elements(t_stack *stack)
{
	int		list_len;

	get_list_len(&list_len, stack->a);
	if (list_len == 2)
		sort_tow_elements(&stack);
	if (list_len == 3)
		sort_tree_elements(&stack);
}

void	sort_tree_elements(t_stack **stack)
{
	if (((*stack)->a->content.split.idx == 2)
		&& ((*stack)->a->next->content.split.idx == 1))
	{
		swap(&(*stack)->a, SA);
		reverse_rotate(&(*stack)->a, RRA);
	}
	else if (((*stack)->a->content.split.idx == 2)
		&& ((*stack)->a->next->content.split.idx == 0))
		rotate(&(*stack)->a, RA);
	else if (((*stack)->a->content.split.idx == 1)
		&& ((*stack)->a->next->content.split.idx == 2))
		reverse_rotate(&(*stack)->a, RRA);
	else if (((*stack)->a->content.split.idx == 1)
		&& ((*stack)->a->next->content.split.idx == 0))
		swap(&(*stack)->a, SA);
	else if (((*stack)->a->content.split.idx == 0)
		&& ((*stack)->a->next->content.split.idx == 2))
	{
		swap(&(*stack)->a, SA);
		rotate(&(*stack)->a, RA);
	}
}

void	sort_tow_elements(t_stack **stack)
{
	rotate(&(*stack)->a, RA);
}
