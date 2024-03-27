/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abmahfou <abmahfou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 16:49:30 by abmahfou          #+#    #+#             */
/*   Updated: 2024/03/27 18:08:01 by abmahfou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate(t_stack **lst)
{
	t_stack	*first_node = *lst;
	t_stack	*last_node = *lst;
	t_stack	*prev = last_node;

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
	if ((*stack_a)->next == NULL || stack_a == NULL)
		return ;
	reverse_rotate(stack_a);
	write(1, "rra\n", 4);
}

void	_rrb(t_stack **stack_b)
{
	if ((*stack_b)->next == NULL || stack_b == NULL)
		return ;
	reverse_rotate(stack_b);
	write(1, "rrb\n", 4);
}

void	_rrr(t_stack **stack_a, t_stack **stack_b)
{
	if ((*stack_a)->next == NULL || stack_a == NULL || (*stack_b)->next == NULL || stack_b == NULL)
		return ;
	reverse_rotate(stack_a);
	reverse_rotate(stack_b);
	write(1, "rrr\n", 4);
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
	t_stack *nod1 = newNode(1);
	t_stack *nod2 = newNode(0);
	t_stack *nod3 = newNode(4);
	t_stack *nod4 = newNode(77);
	node1->next = node2;
	node2->next = node3;
	node3->next = node4;
	nod1->next = nod2;
	nod2->next = nod3;
	nod3->next = nod4;
	// _rr(&node1, &nod1);
	reverse_rotate(&node1);

	t_stack *tmp = node1;
	// t_stack *tmp1 = nod1;
	while (tmp != NULL)
	{
		printf("%d\n", tmp->value);
		tmp = tmp->next;
	}
	return 0;
}