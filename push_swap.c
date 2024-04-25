/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abmahfou <abmahfou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 17:14:50 by abmahfou          #+#    #+#             */
/*   Updated: 2024/04/25 23:13:19 by abmahfou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;

	a = NULL;
	b = NULL;
	if (argc == 1)
		return (0);
	else if (argc == 2 && argv[1][0] == '\0')
		error();
	else if (argc == 2)
	{
		if (is_only_space(argv[1]))
		{
			write(2, "Error\n", 6);
			return (1);
		}
		argv = ft_split(argv[1], ' ');
		stack_init(&a, argv);
	}
	else
		stack_init(&a, argv + 1);
	if (is_sorted(a) == true)
		return (0);
	else
		check_algo(&a, &b);
}
