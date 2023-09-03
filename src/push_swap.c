/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgabler <fgabler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 18:14:19 by fgabler           #+#    #+#             */
/*   Updated: 2023/09/03 18:22:29 by fgabler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_input			*input;
	t_dubl_list		*head;
	t_stack			*stack;

	head = NULL;
	input = malloc(sizeof(t_input));
	stack = malloc(sizeof(t_stack));
	fill_struct_with_argv_argc(argc, argv, input);
	if (input_pasting(input))
		return (true);
	fill_struct_whit_ints(input, &head);
	create_stack(&stack, head);
	print_clst(stack->a);
	return (0);
}
