/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_allocated_mem.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgabler <mail@student.42heilbronn.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 14:41:15 by fgabler           #+#    #+#             */
/*   Updated: 2023/09/04 14:51:07 by fgabler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_allocated_mem(t_input **input, t_dubl_list **strct, t_stack **stack)
{
	if (*input != NULL)
	{
		free(*input);
		input = NULL;
	}
	if (*strct != NULL)
		ft_clstclear(strct);
	if (*stack != NULL)
	{
		free(*stack);
		stack = NULL;
	}
}
