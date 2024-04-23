/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abmahfou <abmahfou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 15:00:01 by abmahfou          #+#    #+#             */
/*   Updated: 2024/04/22 21:52:48 by abmahfou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error(void)
{
	write(2, "Error\n", 6);
	exit(1);
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
