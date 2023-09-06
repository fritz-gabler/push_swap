/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_struct.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgabler <mail@student.42heilbronn.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 18:23:15 by fgabler           #+#    #+#             */
/*   Updated: 2023/09/06 12:01:26 by fgabler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	fill_struct_whit_ints(t_input *input, t_dubl_list **head)
{
	t_union		gate;
	t_dubl_list	*new;
	t_dubl_list	*new_head;
	int			i;

	new_head = NULL;
	gate.split.idx = 0;
	i = -1;
	while (input->string_input[++i])
	{
		gate.split.val = ft_atoi(input->string_input[i]);
		new = ft_clstnew(gate);
		ft_clstadd_back(&new_head, new);
		*head = new_head;
	}
}

void	fill_struct_with_argv_argc(int argc, char **argv, t_input *input)
{
	input->argc = argc;
	input->argv = argv;
}
