/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abmahfou <abmahfou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 20:10:47 by abmahfou          #+#    #+#             */
/*   Updated: 2024/05/01 14:56:53 by abmahfou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_free(t_stack *stack)
{
	t_stack	*tmp;

	if (stack == NULL)
		return ;
	while (stack)
	{
		tmp = stack;
		stack = stack->next;
		free(tmp);
	}
}

void	free_mem(char **split)
{
	int	n;

	n = 0;
	while (split[n])
	{
		free(split[n]);
		n++;
	}
	free(split);
}
