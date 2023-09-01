/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_parsing.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgabler <mail@student.42heilbronn.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 19:17:25 by fgabler           #+#    #+#             */
/*   Updated: 2023/09/01 17:13:58 by fgabler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int is_content_digit(char **string_input);
static void	get_input_as_strings(char ***string_input, t_input *input);
int	is_type_correctly(t_input *input, t_dubl_list *lst);
static int	check_for_dublicating_numbers(t_input *input);

int	input_pasting(t_input *input)
{
	char			**string_input;
	t_dubl_list		*head;

	head = NULL;
	if (input->argc < 2)
		return (error_handling(), true);
	get_input_as_strings(&string_input, input);
	if (is_content_digit(string_input))
		return(error_handling(), true);
	if (check_for_dublicating_numbers(input))
		return (error_handling(), true);
	fill_struct_whit_ints(input, &head);
	if (is_type_correctly(input, head))
		return (error_handling(), true);
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
			if (ft_isdigit(string_input[i][j]) != true)
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


static int	check_for_dublicating_numbers(t_input *input)
{
	int		i;
	int		j;

	i = 0;
	while (++i < input->argc)
	{
		j = i + 1;
		while (j < input->argc)
		{
			if(ft_atoi(input->argv[i]) == ft_atoi(input->argv[j]))
				return (free(input), true);
			j++;
		}
	}
	return (0);
}

int	is_type_correctly(t_input *input, t_dubl_list *lst)
{
	int				i;
	int				guard;
	t_dubl_list		*current;

	i = 0;
	guard = 1;
	current = lst;
	while (++i < input->argc)
	{
		if (ft_strlen(input->argv[i]) > 11)
			return (free(input), ft_clstclear(&lst), true);
	}
	while (guard)
	{
		ft_printf("%d", current->content.split.val);
		if ((current->content.split.val > INT_MAX)
		|| (current->content.split.val < INT_MIN))
			return (free(input), ft_clstclear(&lst), 1);
		current = current->next;
		if (current == lst)
			guard = 0;
	}
	return (false);
}
