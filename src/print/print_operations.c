/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_operations.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgabler <mail@student.42heilbronn.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 13:30:04 by fgabler           #+#    #+#             */
/*   Updated: 2023/09/05 14:53:15 by fgabler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_operations(int operation)
{
	if (operation == SA)
		ft_printf("sa\n");
	if (operation == SB)
		ft_printf("sb\n");
	if (operation == SS)
		ft_printf("ss\n");
	if (operation == PA)
		ft_printf("pa\n");
	if (operation == PB)
		ft_printf("pb\n");
	if (operation == RA)
		ft_printf("ra\n");
	if (operation == RB)
		ft_printf("rb\n");
	if (operation == RR)
		ft_printf("rr\n");
	if (operation == RRA)
		ft_printf("rra\n");
	if (operation == RRB)
		ft_printf("rrb\n");
	if (operation == RRR)
		ft_printf("rrr\n");
	if (operation == NON)
		return ;
}
