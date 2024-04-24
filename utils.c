/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abmahfou <abmahfou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 15:00:01 by abmahfou          #+#    #+#             */
/*   Updated: 2024/04/23 12:35:24 by abmahfou         ###   ########.fr       */
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

void	re_index(t_stack *stack)
{
	unsigned long	index;
	t_stack			*tmp;

	index = 0;
	tmp = stack;
	while (tmp)
	{
		tmp->index = index++;
		tmp = tmp->next;
	}
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
