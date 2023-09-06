/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgabler <mail@student.42heilbronn.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 16:51:24 by fgabler           #+#    #+#             */
/*   Updated: 2023/09/07 01:41:47 by fgabler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	big_sort(t_stack *stack)
{
	int	i;
	int	j;
	int	list_len;
	int	bit_size;

	i = -1;
	get_list_len(&list_len, stack->a);
	bit_size = 0;
	while ((list_len) >> bit_size)
		bit_size++;
	while (++i < bit_size)
	{
		j = -1;
		while (++j < list_len)
		{
			if (((stack->a->content.split.idx >> i) & 1) == false)
				push(&stack->a, &stack->b, PB);
			else
				rotate(&stack->a, RA);
		}
		while (stack->b != NULL)
		{
			push(&stack->b, &stack->a, PA);
		}
	}
}
