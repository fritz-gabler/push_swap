/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgabler <mail@student.42heilbronn.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 18:35:14 by fgabler           #+#    #+#             */
/*   Updated: 2023/09/07 01:45:45 by fgabler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(
		t_dubl_list **base_stack, t_dubl_list **targed_stack, int operation)
{
	t_dubl_list	*tail;
	t_dubl_list	*second;
	t_dubl_list	*save_head;
	int			base_list_len;

	get_list_len(&base_list_len, *base_stack);
	save_head = *base_stack;
	if (base_list_len > 1)
	{
		tail = save_head->prev;
		second = save_head->next;
		second->prev = tail;
		tail->next = save_head->next;
		*base_stack = second;
		ft_clstadd_front(targed_stack, save_head);
	}
	else
	{
		ft_clstadd_front(targed_stack, save_head);
		*base_stack = NULL;
	}
	print_operations(operation);
}
