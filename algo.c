/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abmahfou <abmahfou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 22:23:47 by abmahfou          #+#    #+#             */
/*   Updated: 2024/04/03 21:56:14 by abmahfou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_stack_3(t_stack **s)
{
	int	a;
	int	b;

	a = (*s)->next->value;
	b = (*s)->next->next->value;
	if (s == NULL)
		return ;
	if ((*s)->value > a && a < b && (*s)->value < b)
		_sa(s);
	else if ((*s)->value > a && a > b && (*s)->value > b)
	{
		_sa(s);
		_rra(s);
	}
	else if ((*s)->value > a && a < b && (*s)->value > b)
		_ra(s);
	else if ((*s)->value < a && a > b && (*s)->value < b)
	{
		_sa(s);
		_ra(s);
	}
	else
		_rra(s);
}

void	sort_stack_5(t_stack **a, t_stack **b)
{
	
}

void	check_algo(t_stack **a, t_stack **b)
{
	if (a == NULL || b == NULL)
		return ;
	if (stack_size(a) == 2)
	{
		if ((*a)->value > (*a)->next->value)
			_sa(a);
	}
	else if (stack_size(a) == 3)
		sort_stack_3(a);
	else if (stack_size(a) == 5)
		sort_stack_5(a, b);
}
