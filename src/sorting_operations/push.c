/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgabler <mail@student.42heilbronn.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 18:35:14 by fgabler           #+#    #+#             */
/*   Updated: 2023/09/04 16:29:18 by fgabler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void push(t_dubl_list **base_stack, t_dubl_list **targed_stack)
{
	t_dubl_list	*tail;
	t_dubl_list	*second;
	t_dubl_list	*save_head;

	save_head = *base_stack;
	tail = save_head->prev;
	second = save_head->next;
	second->prev = tail;
	tail->next = save_head->next;
	*base_stack = second;
	ft_clstadd_front(targed_stack, save_head);
}
