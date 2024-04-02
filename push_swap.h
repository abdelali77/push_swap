/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abmahfou <abmahfou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 00:51:09 by abmahfou          #+#    #+#             */
/*   Updated: 2024/04/02 17:25:54 by abmahfou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include <stdbool.h>
#include <stdio.h>

typedef struct stack_node
{
	int					value;
	struct stack_node	*prev;
	struct stack_node	*next;
}	t_stack;

void	stack_init(t_stack **stack_a, char **argv);

void	_sa(t_stack **stack_a);
void	_sb(t_stack **stack_b);
void	_ss(t_stack **stack_a, t_stack **stack_b);

void	_ra(t_stack **stack_a);
void	_rb(t_stack **stack_b);
void	_rr(t_stack **stack_a, t_stack **stack_b);

void	_rra(t_stack **stack_a);
void	_rrb(t_stack **stack_b);
void	_rrr(t_stack **stack_a, t_stack **stack_b);

void	_pa(t_stack **stack_a, t_stack **stack_b);
void	_pb(t_stack **stack_a, t_stack **stack_b);

char	**ft_split(char const *s, char c);
long	str_to_long(char *s);
int		check_valid_integer(char *s);
int		check_duplicate(t_stack *stack, long nbr);
bool	is_sorted(t_stack **stack);
void	check_algo(t_stack **stack);

#endif