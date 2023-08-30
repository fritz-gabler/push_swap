/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgabler <mail@student.42heilbronn.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 18:15:02 by fgabler           #+#    #+#             */
/*   Updated: 2023/08/30 19:02:08 by fgabler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

//COLORS
# define RED		"\x01\033[1;31m\x02"

//DEFINE
# define FALSE 1 
# define TRUE  0

//HEADER
# include "libft.h"

//STRUCT
typedef struct s_input
{
	char	**argv;
	int		argc;
} t_input;

//FUNKTIONS

//INPUT PARSING
int input_pasting(int  argc, char **argv);
void	error_handling(void);

//FILL STRUCT
void	fill_struct_whit_ints(t_input *input, t_dubl_list *head);
void	fill_struct_with_argv_argc(int argc, char **argv, t_input *input);


#endif
