/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abmahfou <abmahfou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 18:18:02 by abmahfou          #+#    #+#             */
/*   Updated: 2024/04/18 15:55:44 by abmahfou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push(t_stack **lst, t_stack **new)
{
	t_stack	*tmp;

	tmp = *lst;
	*lst = (*lst)->next;
	tmp->next = *new;
	*new = tmp;
}

void	_pa(t_stack **stack_a, t_stack **stack_b)
{
	if (*stack_b == NULL)
		return ;
	ft_push(stack_b, stack_a);
	write(1, "pa\n", 3);
}

void	_pb(t_stack **stack_a, t_stack **stack_b)
{
	if (*stack_a == NULL)
		return ;
	ft_push(stack_a, stack_b);
	write(1, "pb\n", 3);
}
