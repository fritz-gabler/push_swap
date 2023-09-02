/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgabler <mail@student.42heilbronn.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 18:35:14 by fgabler           #+#    #+#             */
/*   Updated: 2023/09/02 19:00:44 by fgabler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_dubl_list **base_stack, t_dubl_list **targed_stack)
{
	t_dubl_list		*head;
	t_dubl_list		*tail;
	t_dubl_list		*secont;
	
	ft_clstadd_front(targed_stack, *base_stack);
	head = *base_stack;

}
