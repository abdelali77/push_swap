/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abmahfou <abmahfou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 13:23:54 by abmahfou          #+#    #+#             */
/*   Updated: 2024/04/25 13:07:28 by abmahfou         ###   ########.fr       */
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

void	sort_stack_extra(t_stack **a, t_stack **b)
{
	while (*b)
	{
		re_index(*b);
		while (*b != max_el(*b))
		{
			if (max_el(*b)->index < stack_size(*b) / 2)
				_rb(b);
			else
				_rrb(b);
		}
		_pa(b, a);
	}
}

void	sort_stack(t_stack **a, t_stack **b, int range)
{
	unsigned long	start;
	unsigned long	end;

	start = 0;
	end = range;
	while (*a)
	{
		if ((*a)->index >= start && (*a)->index <= end)
		{
			_pb(a, b);
			start++;
			end++;
		}
		else if ((*a)->index < start)
		{
			_pb(a, b);
			_rb(b);
			start++;
			end++;
		}
		else
			_ra(a);
	}
	sort_stack_extra(a, b);
}
