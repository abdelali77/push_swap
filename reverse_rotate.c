/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abmahfou <abmahfou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 16:49:30 by abmahfou          #+#    #+#             */
/*   Updated: 2024/03/27 22:42:31 by abmahfou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate(t_stack **lst)
{
	t_stack	*first_node;
	t_stack	*last_node;
	t_stack	*prev;

	first_node = *lst;
	last_node = *lst;
	prev = last_node;
	while (last_node->next != NULL)
	{
		prev = last_node;
		last_node = last_node->next;
	}
	last_node->next = *lst;
	*lst = last_node;
	prev->next = NULL;
}

void	_rra(t_stack **stack_a)
{
	if ((*stack_a)->next == NULL || *stack_a == NULL)
		return ;
	reverse_rotate(stack_a);
	write(1, "rra\n", 4);
}

void	_rrb(t_stack **stack_b)
{
	if ((*stack_b)->next == NULL || *stack_b == NULL)
		return ;
	reverse_rotate(stack_b);
	write(1, "rrb\n", 4);
}

void	_rrr(t_stack **stack_a, t_stack **stack_b)
{
	if ((*stack_a)->next == NULL || *stack_a == NULL 
		|| (*stack_b)->next == NULL || *stack_b == NULL)
		return ;
	reverse_rotate(stack_a);
	reverse_rotate(stack_b);
	write(1, "rrr\n", 4);
}
