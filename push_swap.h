/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abmahfou <abmahfou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 00:51:09 by abmahfou          #+#    #+#             */
/*   Updated: 2024/04/23 11:37:04 by abmahfou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include <stdbool.h>

typedef struct stack_node
{
	int					value;
	struct stack_node	*next;
	unsigned long		index;
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

void	_pa(t_stack **lst, t_stack **new);
void	_pb(t_stack **lst, t_stack **new);

char	**ft_split(char const *s, char c);
long	str_to_long(char *s);
int		check_valid_integer(char *s);
int		check_duplicate(t_stack *stack, long nbr);
bool	is_sorted(t_stack **stack);
void	check_algo(t_stack **a, t_stack **b);
size_t	stack_size(t_stack **lst);
void	sort_stack(t_stack **a, t_stack **b, int range);
void	indexing_stack(t_stack *stack);
t_stack	*find_last_node(t_stack *last_node);
t_stack	*min_el(t_stack **lst);
t_stack	*max_el(t_stack **lst);
void	error(void);
void	re_index(t_stack *stack);

#endif