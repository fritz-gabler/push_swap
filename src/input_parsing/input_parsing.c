/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_parsing.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgabler <mail@student.42heilbronn.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 19:17:25 by fgabler           #+#    #+#             */
/*   Updated: 2023/08/31 15:55:23 by fgabler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int is_content_digit(t_input *input);
static void	get_input_as_strings(char ***string_input, t_input *input);

int input_pasting(t_input *input)
{
	char			**string_input;
	t_dubl_list		*head;

	head = NULL;
	if (input->argc < 2)
		return (error_handling(), FALSE);
    if (is_content_digit(input))
		return(error_handling(), FALSE);
	get_input_as_strings(&string_input, input);
	fill_struct_whit_ints(input, &head);
	return (0);
}

static int is_content_digit(t_input *input)
{
	int	j;
	int	i; 

	i = 0;
	while (++i < input->argc)
	{
		j = -1;
		while (input->argv[i][++j] != '\0')
		{
			if (input->argv[i][j] == ' ')
				j++;
			if (ft_isdigit(input->argv[i][j]) != FALSE)
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
