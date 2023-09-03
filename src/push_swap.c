/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgabler <fgabler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 18:14:19 by fgabler           #+#    #+#             */
/*   Updated: 2023/09/03 16:13:01 by fgabler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_input			*input;
	t_dubl_list		*head;
	t_dubl_list		*test;

	head = NULL;
	input = malloc(sizeof(t_input));
	fill_struct_with_argv_argc(argc, argv, input);
	if (input_pasting(input))
		return (true);
	fill_struct_whit_ints(input, &head);
	fill_struct_whit_ints(input, &test);
	push(&test, &head);
	return (0);
}
