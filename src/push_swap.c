/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgabler <mail@student.42heilbronn.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 18:14:19 by fgabler           #+#    #+#             */
/*   Updated: 2023/09/02 16:44:47 by fgabler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_input			*input;
	t_dubl_list		*head;

	head = NULL;
	input = malloc(sizeof(t_input));
	fill_struct_with_argv_argc(argc, argv, input);
	input_pasting(input);
	fill_struct_whit_ints(input, &head);
	swap(&head);
	ft_clst_print(head);
	return (0);
}
