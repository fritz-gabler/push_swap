/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_rotate.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgabler <mail@student.42heilbronn.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 11:36:26 by fgabler           #+#    #+#             */
/*   Updated: 2023/09/05 14:00:24 by fgabler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate_rotate(t_dubl_list **stack_a, t_dubl_list **stack_b)
{
	reverse_rotate(stack_a, RRR);
	reverse_rotate(stack_b, NON);
}
