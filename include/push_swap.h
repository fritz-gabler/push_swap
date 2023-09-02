/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgabler <mail@student.42heilbronn.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 18:15:02 by fgabler           #+#    #+#             */
/*   Updated: 2023/09/01 19:18:57 by fgabler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

//COLORS
# define RED		"\x01\033[1;31m\x02"

//HEADER
# include "libft.h"
# include "limits.h"
# include <stdio.h>

//STRUCT
typedef struct s_input
{
	char	**argv;
	int		argc;
}	t_input;

//FUNKTIONS

//INPUT PARSING
int		input_pasting(t_input *input);
void	error_handling(void);

//FILL STRUCT
void	fill_struct_whit_ints(t_input *input, t_dubl_list **head);
void	fill_struct_with_argv_argc(int argc, char **argv, t_input *input);

#endif
