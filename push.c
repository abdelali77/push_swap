/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abmahfou <abmahfou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 18:18:02 by abmahfou          #+#    #+#             */
/*   Updated: 2024/04/22 15:28:55 by abmahfou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push(t_stack **lst, t_stack **new)
{
	t_stack	*tmp;

	tmp = *lst;
	*lst = (*lst)->next;
	tmp->next = *new;
	*new = tmp;
}

void	_pa(t_stack **lst, t_stack **new)
{
	if (*lst == NULL)
		return ;
	ft_push(lst, new);
	write(1, "pa\n", 3);
}

void	_pb(t_stack **lst, t_stack **new)
{
	if (*lst == NULL)
		return ;
	ft_push(lst, new);
	write(1, "pb\n", 3);
}
