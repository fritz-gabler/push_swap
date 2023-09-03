/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgabler <mail@student.42heilbronn.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 18:35:14 by fgabler           #+#    #+#             */
/*   Updated: 2023/09/03 16:15:29 by fgabler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void push(t_dubl_list **base_stack, t_dubl_list **targed_stack) {
  t_dubl_list *head;
  t_dubl_list *tail;
  t_dubl_list *second;

  ft_clstadd_front(targed_stack, *base_stack);
  print_clst((*targed_stack));
  head = *base_stack;
  tail = head->prev;
  second = head->next;
  second->prev = tail;
  tail->next = second;
  free(head);
  head = NULL;
  *base_stack = second;
  ft_printf("base:");
  ft_printf("%d\n", (*base_stack)->content.split.val);
  ft_printf("%d\n", (*base_stack)->next->content.split.val);
  ft_printf("%d\n", (*base_stack)->next->next->content.split.val);
  ft_printf("%d\n", (*base_stack)->next->next->next->content.split.val);
  ft_printf("%d\n", (*base_stack)->next->next->next->next->content.split.val);
  ft_printf("\n\n\n");
  ft_printf("targed:\n");
  ft_printf("%d\n", (*targed_stack)->content.split.val);
  ft_printf("%d\n", (*targed_stack)->next->content.split.val);
  ft_printf("%d\n", (*targed_stack)->next->next->content.split.val);
  ft_printf("%d\n", (*targed_stack)->next->next->next->content.split.val);
  ft_printf("%d\n", (*targed_stack)->next->next->next->next->content.split.val);
}
