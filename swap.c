/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abmahfou <abmahfou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 22:38:50 by abmahfou          #+#    #+#             */
/*   Updated: 2024/03/27 18:04:41 by abmahfou         ###   ########.fr       */
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
	if ((*stack_a)->next == NULL || stack_a == NULL)
		return ;
	swap_values(stack_a);
	write(1, "sa\n", 3);
}

void	_sb(t_stack **stack_b)
{
	if ((*stack_b)->next == NULL || stack_b == NULL)
		return ;
	swap_values(stack_b);
	write(1, "sb\n", 3);
}

void	_ss(t_stack **stack_a, t_stack **stack_b)
{
	if ((*stack_a)->next == NULL || stack_a == NULL || (*stack_b)->next == NULL || stack_b == NULL)
		return ;
	swap_values(stack_a);
	swap_values(stack_b);
	write(1, "ss\n", 3);
}

#include <stdio.h>

t_stack* newNode(int value) {
	t_stack* node = (t_stack*)malloc(sizeof(t_stack));
	node->value = value;
	node->next = NULL;
	return node;
}
int main() {
	t_stack *node1 = newNode(100);
	t_stack *node2 = newNode(90);
	t_stack *node3 = newNode(9);
	t_stack *node4 = newNode(0);

	t_stack *nod1 = newNode(5);
	t_stack *nod2 = newNode(6);
	t_stack *nod3 = newNode(99);
	t_stack *nod4 = newNode(3);
	node1->next = node2;
	node2->next = node3;
	node3->next = node4;
	nod1->next = nod2;
	nod2->next = nod3;
	nod3->next = nod4;

	_sa(&node1);

	t_stack *tmp = node1;
	while (tmp != NULL)
	{
		printf("%d\n", tmp->value);
		tmp = tmp->next;
	}
	return 0;
}