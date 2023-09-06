/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_ten_or_less_elements.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgabler <mail@student.42heilbronn.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 18:20:47 by fgabler           #+#    #+#             */
/*   Updated: 2023/09/07 01:45:15 by fgabler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	get_smallest_number(t_dubl_list *list, int *smallest_number);
static void	get_possition_in_list(
				t_dubl_list *list, int smallest_number, int *possition);

void	sort_ten_or_less_elements(t_stack *stack)
{
	int		list_len;
	int		smallest_number;
	int		possition;

	get_list_len(&list_len, stack->a);
	while (list_len > 2)
	{
		get_smallest_number(stack->a, &smallest_number);
		get_possition_in_list(stack->a, smallest_number, &possition);
		if (possition == 0)
			push(&stack->a, &stack->b, PB);
		else if ((list_len / 2) < possition)
			reverse_rotate(&stack->a, RRA);
		else
			rotate(&stack->a, RA);
		get_list_len(&list_len, stack->a);
	}
	if (is_input_already_sortet(&stack->a) == false)
		rotate(&stack->a, RA);
	while (stack->b != NULL)
		push(&stack->b, &stack->a, PA);
}

static void	get_smallest_number(t_dubl_list *list, int *smallest_number)
{
	int				list_len;
	t_dubl_list		*current;
	int				guard;

	get_list_len(&list_len, list);
	*smallest_number = INT_MAX;
	current = list;
	guard = true;
	while (guard)
	{
		if (*smallest_number > current->content.split.idx)
			*smallest_number = current->content.split.idx;
		current = current->next;
		if (current == list)
			guard = false;
	}
}

static void	get_possition_in_list(
		t_dubl_list *list, int smallest_number, int *possition)
{
	t_dubl_list	*current;
	int			guard;

	guard = true;
	*possition = 0;
	current = list;
	while (guard)
	{
		if (current->content.split.idx == smallest_number)
			guard = false;
		if (guard == true)
			current = current->next;
		if (current == list)
			guard = false;
		(*possition)++;
	}
	*possition -= 1;
}
