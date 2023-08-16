/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_parsing.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgabler <mail@student.42heilbronn.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 19:17:25 by fgabler           #+#    #+#             */
/*   Updated: 2023/08/16 19:51:23 by fgabler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int is_content_digit(int argc, char **argv);
static void	get_input_as_chars(char ***string_inpu, int argc, char **argv);

int input_pasting(int  argc, char **argv)
{
	char		**string_input;
	t_number	*numbers;

    if (is_content_digit(argc, argv))
		return(TRUE);
	get_input_as_chars(&string_input, argc, argv);
	return (0);
}

static int is_content_digit(int argc, char **argv)
{
	int	j;
	int	i; 

	i = -1;
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

static void	get_input_as_chars(char ***string_inpu, int argc, char **argv)
{
	int		count_argv;
	int		i;
	int		j;
	char	**nbr;

	count_argv = 0;
	while (++count_argv < argc)
	{
		nbr = ft_split(argv[count_argv], ' ');
		i = -1;
		while (nbr[++i] != NULL)
		{
			*string_inpu[i] = ft_strjoin_mod(*string_inpu[i], nbr[i]);
			ft_printf(*string_inpu[i]);
		}
		free_dubble_array(nbr);
	}
	return ;
}
