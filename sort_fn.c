/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_fn.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahansal <mahansal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 13:29:38 by mahansal          #+#    #+#             */
/*   Updated: 2023/02/16 07:26:34 by mahansal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_two(t_node **stack_a)
{
	if ((*stack_a)->value > (*stack_a)->next->value)
		sa(stack_a, 1);
}

void	sort_three(t_node **stack_a)
{
	int	max_index;

	max_index = get_max_index(*stack_a);
	if (max_index == 0)
		ra(stack_a, 1);
	else if (max_index == 1)
		rra(stack_a, 1);
	if ((*stack_a)->value > (*stack_a)->next->value)
		sa(stack_a, 1);
}

void	sort_four(t_node **stack_a, t_node **stack_b)
{
	int	min_index;

	min_index = get_min_index(*stack_a);
	if (min_index == 1)
		sa(stack_a, 1);
	else if (min_index == 2)
	{
		rra(stack_a, 1);
		rra(stack_a, 1);
	}
	else if (min_index == 3)
		rra(stack_a, 1);
	pb(stack_a, stack_b, 1);
	if (!check_is_sorted(*stack_a))
		sort_three(stack_a);
	pa(stack_a, stack_b, 1);
}

void	sort_five(t_node **stack_a, t_node **stack_b)
{
	int	min_index;

	min_index = get_min_index(*stack_a);
	if (min_index == 1)
		sa(stack_a, 1);
	else if (min_index == 2)
	{
		ra(stack_a, 1);
		ra(stack_a, 1);
	}
	else if (min_index == 3)
	{
		rra(stack_a, 1);
		rra(stack_a, 1);
	}
	else if (min_index == 4)
		rra(stack_a, 1);
	pb(stack_a, stack_b, 1);
	if (!check_is_sorted(*stack_a))
		sort_four(stack_a, stack_b);
	pa(stack_a, stack_b, 1);
}

void	sort_big(t_node **stack_a, t_node **stack_b, int division)
{
	int			size;
	int			*tab;

	size = ft_lstsize(*stack_a);
	tab = sort_tab(*stack_a, size);
	push_a_b(stack_a, stack_b, tab, division);
	while (*stack_b)
		push_back(stack_a, stack_b, ft_lstsize(*stack_b));
	free(tab);
}
