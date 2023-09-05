/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgabler <mail@student.42heilbronn.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 13:30:47 by fgabler           #+#    #+#             */
/*   Updated: 2023/09/05 13:56:46 by fgabler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


void	swap(t_dubl_list **stack, int operation)
{
	t_dubl_list *first;
	t_dubl_list *second;
	t_dubl_list *tail;

	first = (*stack);
	second = (*stack)->next;
	tail = (*stack)->prev;
	first->next = second->next;
	second->prev = first->prev;
	second->next = first;
	first->prev = second;
	tail->next = second;
	*(stack) = second;
	print_operations(operation);
}
