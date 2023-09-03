/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgabler <mail@student.42heilbronn.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 18:35:14 by fgabler           #+#    #+#             */
/*   Updated: 2023/09/03 18:10:55 by fgabler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void push(t_dubl_list **base_stack, t_dubl_list **targed_stack)
{
	t_dubl_list	*tail;
	t_dubl_list	*second;

	ft_clstadd_front(targed_stack, *base_stack);
	ft_printf("%d\n", (*targed_stack)->content.split.val);
	tail = (*base_stack)->prev;
	second = (*base_stack)->next;
	second->prev = tail;
	tail->next = (*base_stack)->next;
	free(*base_stack);
	*base_stack = NULL;
	*base_stack = second;
	/*
	ft_printf("base:");
	ft_printf("%d\n", (*base_stack)->content.split.val);
	ft_printf("%d\n", (*base_stack)->next->content.split.val);
	ft_printf("%d\n", (*base_stack)->next->next->content.split.val);
	ft_printf("%d\n", (*base_stack)->next->next->next->content.split.val);
	ft_printf("%d\n", (*base_stack)->next->next->next->next->content.split.val);
	ft_printf("%d\n", (*base_stack)->next->next->next->next->next->content.split.val);
	ft_printf("\n\n\n");
	ft_printf("targed:\n");
	ft_printf("%d\n", (*targed_stack)->content.split.val);
	ft_printf("%d\n", (*targed_stack)->next->content.split.val);
	ft_printf("%d\n", (*targed_stack)->next->next->content.split.val);
	ft_printf("%d\n", (*targed_stack)->next->next->next->content.split.val);
	ft_printf("%d\n", (*targed_stack)->next->next->next->next->content.split.val);
	*/
}

