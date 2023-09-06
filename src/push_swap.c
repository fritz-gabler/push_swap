/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgabler <fgabler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 18:14:19 by fgabler           #+#    #+#             */
/*   Updated: 2023/09/06 14:18:15 by fgabler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_input			*input;
	t_dubl_list		*strct;
	t_stack			*stack;
	int				struct_len;

	strct = NULL;
	input = malloc(sizeof(t_input));
	stack = malloc(sizeof(t_stack));
	fill_struct_with_argv_argc(argc, argv, input);
	if (input_pasting(input))
		return (free_allocated_mem(&input, &strct, &stack), true);
	fill_struct_whit_ints(input, &strct);
	index_input(&strct);
	get_list_len(&struct_len, strct);
	if (is_input_already_sortet(&strct))
		return (free_allocated_mem(&input, &strct, &stack), true);
	create_stack(&stack, strct);
	big_sort(stack);
	return (0);
}
