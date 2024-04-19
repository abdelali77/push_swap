/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abmahfou <abmahfou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 22:23:47 by abmahfou          #+#    #+#             */
/*   Updated: 2024/04/19 15:57:48 by abmahfou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*max_el(t_stack **lst)
{
	t_stack	*max;
	t_stack	*tmp;

	tmp = *lst;
	max = *lst;
	while (tmp)
	{
		if (tmp->value > max->value)
			max = tmp;
		tmp = tmp->next;
	}
	return (max);
}

t_stack	*min_el(t_stack **lst)
{
	t_stack	*min;
	t_stack	*tmp;

	tmp = *lst;
	min = *lst;
	while (tmp)
	{
		if (tmp->value < min->value)
			min = tmp;
		tmp = tmp->next;
	}
	return (min);
}

void	sort_stack_2_3(t_stack **s)
{
	if (*s == max_el(s))
		_ra(s);
	else if (max_el(s) == (*s)->next)
		_rra(s);
	if ((*s)->value > (*s)->next->value)
		_sa(s);
}

void	sort_stack_4_5(t_stack **a, t_stack **b)
{
	while (min_el(a) != *a)
	{
		if (min_el(a)->index > 2)
			_rra(a);
		else
			_ra(a);
	}
	_pb(a, b);
	while (min_el(a) != *a)
	{
		if (min_el(a)->index > 2)
			_rra(a);
		else
			_ra(a);
	}
	_pb(a, b);
	sort_stack_2_3(a);
	_pa(a, b);
	_pa(a, b);
}

void	check_algo(t_stack **a, t_stack **b)
{
	if (a == NULL || b == NULL)
		return ;
	else if (stack_size(a) <= 3)
		sort_stack_2_3(a);
	else if (stack_size(a) <= 5)
		sort_stack_4_5(a, b);
	else if (stack_size(a) <= 100)
		sort_stack_100(a, b);
}
