/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_parsing.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgabler <mail@student.42heilbronn.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 19:17:25 by fgabler           #+#    #+#             */
/*   Updated: 2023/08/31 17:12:08 by fgabler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int is_content_digit(char **string_input);
static void	get_input_as_strings(char ***string_input, t_input *input);

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
	return (0);
}

static int is_content_digit(char **string_input)
{
	int	j;
	int	i; 
	int	row_len;

	i = -1;
	row_len = (count_doupple_arry_quantity(string_input) + 1);
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
/*
static int	check_dunlicating_numbers(t_dubl_list *head)
{

	return (0);
}*/
