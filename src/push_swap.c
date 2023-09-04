/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgabler <fgabler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 18:14:19 by fgabler           #+#    #+#             */
/*   Updated: 2023/09/04 20:29:45 by fgabler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_input			*input;
	t_dubl_list		*strct;
	t_stack			*stack;

	strct = NULL;
	input = malloc(sizeof(t_input));
	stack = malloc(sizeof(t_stack));
	fill_struct_with_argv_argc(argc, argv, input);
	if (input_pasting(input))
		return (free_allocated_mem(&input, &strct, &stack), true);
	fill_struct_whit_ints(input, &strct);
	index_input(&strct);
	if (is_input_already_sortet(&strct))
		return (free_allocated_mem(&input, &strct, &stack), true);
	create_stack(&stack, strct);
	return (0);
}
