/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abmahfou <abmahfou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 13:23:54 by abmahfou          #+#    #+#             */
/*   Updated: 2024/04/20 16:10:27 by abmahfou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	indexing_stack(t_stack *stack)
{
	t_stack	*x;
	t_stack	*y;

	x = stack;
	while (x)
	{
		x->index = 0;
		y = stack;
		while (y)
		{
			if (x->value > y->value)
				x->index++;
			y = y->next;
		}
		x = x->next;
	}
}
