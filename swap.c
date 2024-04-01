/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abmahfou <abmahfou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 22:38:50 by abmahfou          #+#    #+#             */
/*   Updated: 2024/03/31 00:29:05 by abmahfou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_stack(t_stack **lst)
{
	int	tmp;

	tmp = (*lst)->value;
	(*lst)->value = (*lst)->next->value;
	(*lst)->next->value = tmp;
}

void	_sa(t_stack **stack_a)
{
	if ((*stack_a)->next == NULL || *stack_a == NULL)
		return ;
	swap_stack(stack_a);
	write(1, "sa\n", 3);
}

void	_sb(t_stack **stack_b)
{
	if ((*stack_b)->next == NULL || *stack_b == NULL)
		return ;
	swap_stack(stack_b);
	write(1, "sb\n", 3);
}

void	_ss(t_stack **stack_a, t_stack **stack_b)
{
	if ((*stack_a)->next == NULL || *stack_a == NULL 
		|| (*stack_b)->next == NULL || *stack_b == NULL)
		return ;
	swap_stack(stack_a);
	swap_stack(stack_b);
	write(1, "ss\n", 3);
}
