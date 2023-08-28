/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgabler <mail@student.42heilbronn.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 18:15:02 by fgabler           #+#    #+#             */
/*   Updated: 2023/08/28 18:35:26 by fgabler          ###   ########.fr       */
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
typedef struct node
{
	int				index;
	int				value;
	struct node		*next;
}	t_node;

//FUNKTIONS

//INPUT PARSING
int input_pasting(int  argc, char **argv);
void	error_handling(void);

#endif
