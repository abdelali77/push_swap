/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abmahfou <abmahfou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 12:04:53 by abmahfou          #+#    #+#             */
/*   Updated: 2024/04/25 12:43:42 by abmahfou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include "./get_next_line/get_next_line.h"

bool	ft_strncmp(char *s1, char *s2, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i])
			return (false);
		i++;
	}
	return (true);
}

void	check_move(t_stack **a, t_stack **b, char *move)
{
	if (ft_strncmp(move, "sb\n", 3))
		swap_stack(b);
	else if (ft_strncmp(move, "sa\n", 3))
		swap_stack(a);
	else if (ft_strncmp(move, "ra\b", 3))
		rotate_stack(a);
	else if (ft_strncmp(move, "rb\n", 3))
		rotate_stack(b);
	else if (ft_strncmp(move, "pa\n", 3))
		ft_push(a, b);
	else if (ft_strncmp(move, "pb\n", 3))
		ft_push(a, b);
	else if (ft_strncmp(move, "rra\n", 4))
		reverse_rotate(a);
	else if (ft_strncmp(move, "rrb\n", 4))
		reverse_rotate(b);
}

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;
	char	*move;

	a = NULL;
	b = NULL;
	if (argc == 1)
		return (1);
	else if (argc == 2 && argv[1][0] == '\0')
		error();
	else if (argc == 2)
	{
		/* if (is_only_space(argv[1]))
		{
			write(2, "Error\n", 6);
			return (1);
		} */
		argv = ft_split(argv[1], ' ');
		stack_init(&a, argv);
	}
	else
		stack_init(&a, argv + 1);
	while (1)
	{
		move = get_next_line(0);
		if(!move)
			break;
		check_move(&a, &b, move);
	}
	if (is_sorted(&a))
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
}
