/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_allocated_mem.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgabler <fgabler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 14:41:15 by fgabler           #+#    #+#             */
/*   Updated: 2023/09/07 00:17:45 by fgabler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_allocated_mem(t_input **input, t_dubl_list **strct, t_stack **stack)
{
	if (*input != NULL)
	{
		if ((*input)->string_input)
			free_dubble_array((*input)->string_input);
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
