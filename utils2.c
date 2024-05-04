/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abmahfou <abmahfou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 21:28:01 by abmahfou          #+#    #+#             */
/*   Updated: 2024/05/04 16:28:51 by abmahfou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

void	iterate(int argc, char **argv, t_stack **a)
{
	int		i;
	char	**args;

	i = 1;
	while (i < argc)
	{
		if (is_only_spaces(argv[i]))
			error(a);
		args = ft_split(argv[i], ' ');
		stack_init(a, args);
		free_mem(args);
		i++;
	}
}
