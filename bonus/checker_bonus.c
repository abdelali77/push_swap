/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abmahfou <abmahfou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 12:04:53 by abmahfou          #+#    #+#             */
/*   Updated: 2024/05/04 17:56:23 by abmahfou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header_bonus.h"

void	check_move_extra(t_stack **a, t_stack **b, char *move)
{
	if (ft_strncmp(move, "ss\n", 3))
	{
		swap_stack(a);
		swap_stack(b);
	}
	else if (ft_strncmp(move, "rr\n", 3))
	{
		rotate_stack(a);
		rotate_stack(b);
	}
	else if (ft_strncmp(move, "rrr\n", 4))
	{
		reverse_rotate(a);
		reverse_rotate(b);
	}
	else
	{
		write(2, "Error\n", 6);
		exit(1);
	}
}

void	check_move(t_stack **a, t_stack **b, char *move)
{
	if (ft_strncmp(move, "sb\n", 3))
		swap_stack(b);
	else if (ft_strncmp(move, "sa\n", 3))
		swap_stack(a);
	else if (ft_strncmp(move, "ra\n", 3))
		rotate_stack(a);
	else if (ft_strncmp(move, "rb\n", 3))
		rotate_stack(b);
	else if (ft_strncmp(move, "pa\n", 3))
		ft_push(b, a);
	else if (ft_strncmp(move, "pb\n", 3))
		ft_push(a, b);
	else if (ft_strncmp(move, "rra\n", 4))
		reverse_rotate(a);
	else if (ft_strncmp(move, "rrb\n", 4))
		reverse_rotate(b);
	else
		check_move_extra(a, b, move);
}

void	read_move(t_stack **a, t_stack **b)
{
	char	*move;

	while (1)
	{
		move = get_next_line(0);
		if (!move)
			break ;
		check_move(a, b, move);
		free(move);
	}
	if (is_sorted(*a) && stack_size(*b) == 0)
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
}

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;

	a = NULL;
	b = NULL;
	if (argc == 1)
		return (0);
	else
		iterate(argc, argv, &a);
	read_move(&a, &b);
	ft_free(a);
	ft_free(b);
	return (0);
}
