/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgabler <mail@student.42heilbronn.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 18:15:02 by fgabler           #+#    #+#             */
/*   Updated: 2023/09/04 14:53:38 by fgabler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

//COLORS
# define RED		"\x01\033[1;31m\x02"

//HEADER
# include "types.h"
# include "libft.h"
# include "limits.h"
# include <stdio.h>

//STRUCT

typedef struct s_stack
{
	t_dubl_list	*a;
	t_dubl_list	*b;
}	t_stack;

typedef struct s_input
{
	char	**argv;
	int		argc;
	char	**string_input;
}	t_input;

//FUNKTIONS

//INPUT PARSING
int		input_pasting(t_input *input);
void	error_handling(void);
int		is_input_already_sortet(t_dubl_list **lst);

//FILL STRUCT
void	fill_struct_whit_ints(t_input *input, t_dubl_list **head);
void	fill_struct_with_argv_argc(int argc, char **argv, t_input *input);
void	print_clst(t_dubl_list *head);
void	create_stack(t_stack **stack, t_dubl_list *input);
void	index_input(t_dubl_list **lst);

//SORTING OPERATIONS
void	swap(t_dubl_list **stack_a);
void	push(t_dubl_list **base_stack, t_dubl_list **targed_stack);

//FREE MEM
void	free_allocated_mem(
			t_input **input, t_dubl_list **strct, t_stack **stack);

#endif
