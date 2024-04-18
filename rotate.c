/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abmahfou <abmahfou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 17:52:10 by abmahfou          #+#    #+#             */
/*   Updated: 2024/04/17 17:14:32 by abmahfou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_stack(t_stack **lst)
{
	t_stack	*first_node;
	t_stack	*last_node;

	first_node = *lst;
	last_node = *lst;
	while (last_node->next != NULL)
		last_node = last_node->next;
	*lst = first_node->next;
	first_node->next = NULL;
	last_node->next = first_node;
}

void	_ra(t_stack **stack_a)
{
	if ((*stack_a)->next == NULL || *stack_a == NULL)
		return ;
	rotate_stack(stack_a);
	write(1, "ra\n", 3);
}

void	_rb(t_stack **stack_b)
{
	if ((*stack_b)->next == NULL || *stack_b == NULL)
		return ;
	rotate_stack(stack_b);
	write(1, "rb\n", 3);
}

void	_rr(t_stack **stack_a, t_stack **stack_b)
{
	if ((*stack_a)->next == NULL || *stack_a == NULL 
		|| (*stack_b)->next == NULL || *stack_b == NULL)
		return ;
	rotate_stack(stack_a);
	rotate_stack(stack_b);
	write(1, "rr\n", 3);
}
