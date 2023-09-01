/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_parsing.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgabler <mail@student.42heilbronn.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 19:17:25 by fgabler           #+#    #+#             */
/*   Updated: 2023/09/01 12:56:30 by fgabler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int is_content_digit(char **string_input);
static void	get_input_as_strings(char ***string_input, t_input *input);
static int	check_for_dublicating_numbers(t_dubl_list *lst);

int input_pasting(t_input *input)
{
	char			**string_input;
	t_dubl_list		*head;

	head = NULL;
	if (input->argc < 2)
		return (error_handling(), FALSE);
	get_input_as_strings(&string_input, input);
    if (is_content_digit(string_input))
		return(error_handling(), FALSE);
	fill_struct_whit_ints(input, &head);
	if (check_for_dublicating_numbers(head))
		return (error_handling(), FALSE);
	return (0);
}

static int is_content_digit(char **string_input)
{
	int	j;
	int	i; 

	i = -1;
	while (++i < count_doupple_arry_quantity(string_input))
	{
		j = -1;
		while (string_input[i][++j] != '\0')
		{
			if (((string_input[i][j] == '+')
				&& (j == 0))
				|| ((string_input[i][j] == '-')
				&& (j == 0)))
				j++;
			if (ft_isdigit(string_input[i][j]) != FALSE)
				return (1);
		}
	}
	return (0);
}

static void	get_input_as_strings(char ***string_input, t_input *input)
{
	int		i;
	char	*nbr;

	i = 0;
	nbr = NULL;
	while (++i < (input->argc))
	{
		nbr = ft_strjoin_mod(nbr, input->argv[i]);
		nbr = ft_strjoin_mod(nbr, " ");
	}
	*string_input = ft_split(nbr, ' ');
}

static int	check_for_dublicating_numbers(t_dubl_list *lst)
{
	t_dubl_list *outer_current;
	t_dubl_list *inner_current;
	int			inner_guard;
	int			outer_guard;

	outer_current = lst;
	inner_current = lst;
	if (outer_current->next != lst)
		outer_guard = true;
	else
		outer_guard = false;
	while (outer_guard == true)
	{
		inner_current = lst;
		inner_guard = true;
		while (inner_guard == true)
		{
			if (outer_current == inner_current)
				inner_current = inner_current->next;
			if (inner_current == lst)
				outer_guard = false;
			if ((outer_current->content.split.val
				== inner_current->content.split.val)
				&& inner_guard == true)
				return (true); 
			inner_current = inner_current->next;
			if (inner_current == lst)
				inner_guard = false;
		}
		outer_current = outer_current->next;
		if (outer_current == lst)
			outer_guard = false;
	}
	return (0);
}
