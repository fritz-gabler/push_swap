/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgabler <mail@student.42heilbronn.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 18:15:02 by fgabler           #+#    #+#             */
/*   Updated: 2023/08/23 11:15:12 by fgabler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

//COLORS
# define RED        "\x01\033[1;31\x02"

//DEFINE
# define FALSE 0 
# define TRUE  1

//HEADER
# include "libft.h"

//STRUCT
typedef struct number
{
	unsigned int	index;
	int				value;
}	t_number;

//FUNKTIONS

//INPUT PARSING
int input_pasting(int  argc, char **argv);

#endif
