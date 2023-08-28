/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_parsing.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgabler <mail@student.42heilbronn.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 19:17:25 by fgabler           #+#    #+#             */
/*   Updated: 2023/08/28 19:24:26 by fgabler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int is_content_digit(int argc, char **argv);
static void	get_input_as_strings(char ***string_inpu, int argc, char **argv);
static void	fill_struct_with_numbers(t_node *node, char **string_input);

int input_pasting(int  argc, char **argv)
{
	char		**string_input;
	t_node		*node;

	node = (t_node *)malloc(sizeof(t_node));
	if (argc < 2)
		return (error_handling(), FALSE);
    if (is_content_digit(argc, argv))
		return(error_handling(), FALSE);
	get_input_as_strings(&string_input, argc, argv);
	fill_struct_with_numbers(node, string_input);
	return (0);
}

static int is_content_digit(int argc, char **argv)
{
	int	j;
	int	i; 

	i = 0;
	while (++i < argc)
	{
		j = -1;
		while (argv[i][++j] != '\0')
		{
			if (argv[i][j] == ' ')
				j++;
			if (ft_isdigit(argv[i][j]) != FALSE)
				return (1);
		}
	}
	return (0);
}

static void	get_input_as_strings(char ***string_input, int argc, char **argv)
{
	int		i;
	char	*nbr;

	i = 0;
	nbr = NULL;
	while (++i < argc)
	{
		nbr = ft_strjoin_mod(nbr, argv[i]);
		nbr = ft_strjoin_mod(nbr, " ");
	}
	*string_input = ft_split(nbr, ' ');
}

static void	fill_struct_with_numbers(t_node *node, char **string_input)
{
	int			i;
	int			row_len;
	t_node		*head;

	i = 0;
	head = node;
	row_len = count_doupple_arry_quantity(string_input);
	while (row_len > i)
	{
		 ft_lstnew(ft_atoi(string_input[i]));
	}
	ft_printf("%d\n", row_len);
}
/*
static int	check_dunlicating_numbers(char *string_input)
{
	int	i; int	j; i = -1;
	while(string_input[++i])
	{
		j = -1;
		while (string_input[++j])
		{
			if (j == i)
				j++;
			if (string_input[i] == string_input[j])
				return (FALSE);
		}

	}
	return (0);
}
*/
