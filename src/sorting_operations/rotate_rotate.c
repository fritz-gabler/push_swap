/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_rotate.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgabler <mail@student.42heilbronn.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 11:42:27 by fgabler           #+#    #+#             */
/*   Updated: 2023/09/05 13:59:35 by fgabler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_rotate(t_dubl_list **stack_a, t_dubl_list **stack_b)
{
	rotate(stack_a, RR);
	rotate(stack_b, NON);
}
