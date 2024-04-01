/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abmahfou <abmahfou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 22:23:47 by abmahfou          #+#    #+#             */
/*   Updated: 2024/03/31 23:13:29 by abmahfou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_3(t_stack **stack)
{
	if ((*stack)->next->next->next == NULL)
		return (1);
	return (0);
}

void	sort_stack(t_stack **s)
{
	int	a;
	int	b;

	a = (*s)->next->value;
	b = (*s)->next->next->value;
	if (s == NULL)
		return ;
	if (check_3(s))
	{
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
}
