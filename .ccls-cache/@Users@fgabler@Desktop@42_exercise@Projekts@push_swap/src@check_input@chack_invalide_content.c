/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chack_invalide_content.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgabler <mail@student.42heilbronn.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 19:17:25 by fgabler           #+#    #+#             */
/*   Updated: 2023/08/16 18:47:20 by fgabler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int is_content_digit(int argc, char **argv);

int input_pasting(int  argc, char **argv)
{
	t_number	numbers[argc];
    if (is_content_digit(argc, argv))
		return(TRUE);
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

static int	convert_str_to_int_and_store_in_numbers(t_number *numbers, int argc, char **argv)
{
	int	i;

	i = 0;
	while (
	arr[0].value = ft_atoi(argv[i]);
}
