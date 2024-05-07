/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abmahfou <abmahfou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 23:42:52 by abmahfou          #+#    #+#             */
/*   Updated: 2024/05/06 11:01:51 by abmahfou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error(t_stack **a)
{
	ft_free(*a);
	write(2, "Error\n", 6);
	exit(1);
}

bool	check_valid_integer(char *s)
{
	int	i;

	i = 0;
	if (s[i] == '-' || s[i] == '+')
		i++;
	while (s[i])
	{
		if (s[i] >= '0' && s[i] <= '9')
			i++;
		else
			return (false);
	}
	return (true);
}

bool	check_duplicate(t_stack *stack, long nbr)
{
	if (stack == NULL)
		return (false);
	while (stack)
	{
		if (stack->value == nbr)
			return (true);
		stack = stack->next;
	}
	return (false);
}
