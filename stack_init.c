/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abmahfou <abmahfou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 00:35:02 by abmahfou          #+#    #+#             */
/*   Updated: 2024/05/04 17:43:53 by abmahfou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*find_last_node(t_stack *last_node)
{
	if (last_node == NULL)
		return (NULL);
	while (last_node->next)
		last_node = last_node->next;
	return (last_node);
}

void	append_node(t_stack **stack, long nbr)
{
	static int	index;
	t_stack		*node;
	t_stack		*last_node;

	if (stack == NULL)
		return ;
	node = malloc(sizeof(t_stack));
	if (node == NULL)
		return ;
	node->value = nbr;
	node->index = index;
	index++;
	node->next = NULL;
	if (*stack == NULL)
		*stack = node;
	else
	{
		last_node = find_last_node(*stack);
		last_node->next = node;
	}
}

void	stack_init(t_stack **stack_a, char **argv)
{
	long	nbr;
	int		i;

	i = 0;
	while (argv[i])
	{
		if (!check_valid_integer(argv[i]))
			error(stack_a);
		nbr = str_to_long(argv[i], stack_a);
		if ((nbr < INT_MIN || nbr > INT_MAX) || check_duplicate(*stack_a, nbr))
			error(stack_a);
		append_node(stack_a, nbr);
		i++;
	}
}
