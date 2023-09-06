/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgabler <fgabler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 18:15:02 by fgabler           #+#    #+#             */
/*   Updated: 2023/09/07 01:51:59 by fgabler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

//COLORS
# define RED		"\x01\033[1;31m\x02"
# define RESET		"\033[0m"

//DEFINE PRINT OPERATIONS
# define SA		000
# define SB		001
# define SS		002
# define PA		003
# define PB		004
# define RA		005
# define RB		006
# define RR		007
# define RRA	012
# define RRB	011
# define RRR	010
# define NON	013

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
int		input_parsing(t_input *input);
void	error_handling(void);
int		is_input_already_sortet(t_dubl_list **lst);

//FILL STRUCT
void	fill_struct_whit_ints(t_input *input, t_dubl_list **head);
void	fill_struct_with_argv_argc(int argc, char **argv, t_input *input);
void	create_stack(t_stack **stack, t_dubl_list *input);
void	index_input(t_dubl_list **lst);
void	get_list_len(int *struct_len, t_dubl_list *strct);

//PRINT
void	print_clst(t_dubl_list *head);
void	print_operations(int operation);

//SORTING OPERATIONS
void	swap(t_dubl_list **stack, int operation);
void	push(t_dubl_list **base_stack,
			t_dubl_list **targed_stack, int operation);
void	rotate(t_dubl_list **stack, int operation);
void	reverse_rotate(t_dubl_list **stack, int operation);
void	rotate_rotate(t_dubl_list **stack_a, t_dubl_list **stack_b);
void	reverse_rotate_rotate(t_dubl_list **stack_a, t_dubl_list **stack_b);
void	swap_swap(t_dubl_list **stack_a, t_dubl_list **stack_b);

//FREE MEM
void	free_allocated_mem(
			t_input **input, t_dubl_list **strct, t_stack **stack);

//SORT
void	big_sort(t_stack *stack);
void	sort_three_or_less_elements(t_stack *stack);
void	sort_ten_or_less_elements(t_stack *stack);

#endif
