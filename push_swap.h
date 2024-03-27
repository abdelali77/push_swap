/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abmahfou <abmahfou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 00:51:09 by abmahfou          #+#    #+#             */
/*   Updated: 2024/03/27 18:20:12 by abmahfou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>

typedef struct stack_node
{
	int					value;
	struct stack_node	*prev;
	struct stack_node	*next;
}	t_stack;

void	swap_stack(t_stack **lst);
void	_sa(t_stack **stack_a);
void	_sb(t_stack **stack_b);
void	_ss(t_stack **stack_a, t_stack **stack_b);

void	rotate_stack(t_stack **lst);
void	_ra(t_stack **stack_a);
void	_rb(t_stack **stack_b);
void	_rr(t_stack **stack_a, t_stack **stack_b);

void	reverse_rotate(t_stack **lst);
void	_rra(t_stack **stack_a);
void	_rrb(t_stack **stack_b);
void	_rrr(t_stack **stack_a, t_stack **stack_b);

#endif