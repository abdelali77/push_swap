/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abmahfou <abmahfou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 17:14:50 by abmahfou          #+#    #+#             */
/*   Updated: 2024/03/29 15:57:52 by abmahfou         ###   ########.fr       */
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
		argv = ft_split(argv[1], ' ');
    stack_init(a, argv);
	 
}

/* t_stack* newNode(int value) {
    t_stack* node = (t_stack*)malloc(sizeof(t_stack));
    if (node == NULL) {
        printf("Memory allocation failed\n");
    }
    node->value = value;
    node->next = NULL;
    return node;
}

int main() {
    t_stack *node1 = newNode(100);
    t_stack *node2 = newNode(90);
    t_stack *node3 = newNode(9);
    t_stack *node4 = newNode(0);
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    
    reverse_rotate(&node1);

    t_stack *tmp = node1;
    while (tmp != NULL)
    {
        printf("%d\n", tmp->value);
        tmp = tmp->next;
    }
    
    return 0;
} */