/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abmahfou <abmahfou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 23:42:52 by abmahfou          #+#    #+#             */
/*   Updated: 2024/04/22 15:18:56 by abmahfou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long	str_to_long(char *s)
{
	int		i;
	int		sign;
	long	nbr;

	i = 0;
	nbr = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t'
		|| s[i] == '\r' || s[i] == '\v' || s[i] == '\f')
		i++;
	sign = 1;
	if (s[i] == '-' || s[i] == '+')
	{
		if (s[i + 1] == '\0')
			error();
		if (s[i] == '-')
			sign *= -1;
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		nbr = nbr * 10 + (s[i] - '0');
		i++;
	}
	return (nbr * sign);
}

int	check_valid_integer(char *s)
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
			return (0);
	}
	return (1);
}

int	check_duplicate(t_stack *stack, long nbr)
{
	if (stack == NULL)
		return (0);
	while (stack)
	{
		if (stack->value == nbr)
			return (1);
		stack = stack->next;
	}
	return (0);
}

bool	is_sorted(t_stack **stack)
{
	t_stack	*tmp;

	tmp = *stack;
	if (tmp == NULL)
		return (true);
	while (tmp->next)
	{
		if (tmp->value > tmp->next->value)
			return (false);
		tmp = tmp->next;
	}
	return (true);
}

size_t	stack_size(t_stack **lst)
{
	t_stack	*tmp;
	size_t	count;

	count = 0;
	tmp = *lst;
	while (tmp)
	{
		tmp = tmp->next;
		count++;
	}
	return (count);
}
