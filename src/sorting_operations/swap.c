/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgabler <mail@student.42heilbronn.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 13:30:47 by fgabler           #+#    #+#             */
/*   Updated: 2023/09/02 16:29:08 by fgabler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_dubl_list **stack)
{
	t_dubl_list *first_element;
	t_dubl_list *save;

	save = *stack;
	first_element = *stack; //1
	(*stack) = first_element->next; //2
	(*stack)->prev = first_element->prev; // 4
	first_element->prev = (*stack); // 1
	first_element->next = (*stack)->next; // 3
	(*stack)->next = first_element;// 1

	ft_printf("frist [%d]\n", save->content.split.val);
	save = save->next;
	ft_printf("secont [%d]\n", save->content.split.val);
	
}
