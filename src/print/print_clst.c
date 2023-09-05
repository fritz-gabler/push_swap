/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_clst.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgabler <mail@student.42heilbronn.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 14:23:38 by fgabler           #+#    #+#             */
/*   Updated: 2023/09/03 14:42:51 by fgabler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_clst(t_dubl_list *head)
{
	t_dubl_list	*tmp;
	int			guard;

	guard = 1;
	tmp = head;
	while (guard)
	{
		ft_printf("%d\n", tmp->content.split.val);
		tmp = tmp->next;
		if (tmp == head)
			guard = 0;
	}
}
