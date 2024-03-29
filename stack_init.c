/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abmahfou <abmahfou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 00:35:02 by abmahfou          #+#    #+#             */
/*   Updated: 2024/03/29 16:43:50 by abmahfou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	stack_init(t_stack **stack_a, char **argv)
{
	long	nbr;
	int		i;

	while (argv[i])
	{
		if (!check_valid_integer(argv[i]))
			write(2, "Error\n", 6);
		nbr = str_to_long(argv[i]);
		if (nbr < INT_MIN || nbr > INT_MAX)
			write(2, "Error\n", 6);
		append_node(stack_a, nbr);
	}
}