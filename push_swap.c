/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abmahfou <abmahfou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 17:14:50 by abmahfou          #+#    #+#             */
/*   Updated: 2024/04/17 17:06:43 by abmahfou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;

	a = NULL;
	b = NULL;
	if (argc == 1 || (argc == 2 && argv[1][0] == '\0'))
		return (1);
	else if (argc == 2)
	{
		argv = ft_split(argv[1], ' ');
		stack_init(&a, argv);
	}
	else
		stack_init(&a, argv + 1);
	if (is_sorted(&a) == true)
		return (0);
	else
		check_algo(&a, &b);
}
