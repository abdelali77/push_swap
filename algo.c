/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abmahfou <abmahfou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 22:23:47 by abmahfou          #+#    #+#             */
/*   Updated: 2024/04/02 17:42:15 by abmahfou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_stack(t_stack **s)
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

void	check_algo(t_stack **stack)
{
	if ((*stack)->next->next == NULL)
	{
		if ((*stack)->value > (*stack)->next->value)
			_sa(stack);
	}
	else if ((*stack)->next->next->next == NULL)
		sort_stack(stack);
}
