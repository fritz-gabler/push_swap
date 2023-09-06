/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_parsing.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgabler <mail@student.42heilbronn.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 19:17:25 by fgabler           #+#    #+#             */
/*   Updated: 2023/09/06 15:01:14 by fgabler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	is_content_digit(char **string_input);
static void	get_input_as_strings(t_input *input);
int			is_type_correctly(t_input *input);
static int	check_for_dublicating_numbers(t_input *input);

int	input_pasting(t_input *input)
{
	if (input->argc < 2)
		return (error_handling(), true);
	get_input_as_strings(input);
	if (is_content_digit(input->string_input))
		return (error_handling(), true);
	if (check_for_dublicating_numbers(input))
		return (error_handling(), true);
	if (is_type_correctly(input))
		return (error_handling(), true);
	return (0);
}

static int	is_content_digit(char **string_input)
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
				return (free_dubble_array(string_input), 1);
		}
	}
	return (0);
}

static void	get_input_as_strings(t_input *input)
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
	input->string_input = ft_split(nbr, ' ');
}

static int	check_for_dublicating_numbers(t_input *input)
{
	int		i;
	int		j;

	i = -1;
	while (input->string_input[++i] != NULL)
	{
		j = i + 1;
		while (input->string_input[j] != NULL)
		{
			if (ft_atoi(input->string_input[i])
					== ft_atoi(input->string_input[j]))
				return (true);
			j++;
		}
	}
	return (0);
}

int	is_type_correctly(t_input *input)
{
	int				i;

	i =  -1;
	while (input->string_input[++i] != NULL)
	{
		if (ft_strlen(input->string_input[i]) > 11)
			return (true);
		if (ft_strtol(input->string_input[i]) > INT_MAX
			|| (ft_strtol(input->string_input[i]) < INT_MIN))
			return (true);
	}
	return (false);
}
