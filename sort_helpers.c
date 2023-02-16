/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_helpers.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahansal <mahansal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 12:58:14 by mahansal          #+#    #+#             */
/*   Updated: 2023/02/15 02:10:39 by mahansal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_min_index(t_node *stack)
{
	int			min;
	int			i;
	int			j;
	t_node		*tmp;

	tmp = stack;
	min = tmp->value;
	i = 0;
	j = 0;
	while (tmp)
	{
		if (tmp->value < min)
		{
			min = tmp->value;
			j = i;
		}
		i++;
		tmp = tmp->next;
	}
	return (j);
}

int	get_max_index(t_node *stack)
{
	int			max;
	int			i;
	int			j;
	t_node		*tmp;

	tmp = stack;
	max = tmp->value;
	i = 0;
	j = 0;
	while (tmp)
	{
		if (tmp->value > max)
		{
			max = tmp->value;
			j = i;
		}
		i++;
		tmp = tmp->next;
	}
	return (j);
}

void	push_a_b(t_node **stack_a, t_node **stack_b, int *tab, int division)
{
	int	i;

	i = 0;
	while (*stack_a)
	{
		if ((*stack_a)->value <= tab[i])
		{
			pb(stack_a, stack_b, 1);
			rb(stack_b, 1);
			i++;
		}
		else if ((*stack_a)->value > tab[i]
			&& (*stack_a)->value <= tab[division + i])
		{
			pb(stack_a, stack_b, 1);
			i++;
		}
		else
			ra(stack_a, 1);
	}
}

void	fill_tab(int **tab, t_node *stack_a)
{
	int	i;

	i = 0;
	while (stack_a)
	{
		(*tab)[i] = stack_a->value;
		stack_a = stack_a->next;
		i++;
	}
}

void	push_back(t_node **stack_a, t_node **stack_b, int size)
{
	int	i;

	i = 0;
	while (1)
	{
		i = get_max_index(*stack_b);
		if (i == 0)
			break ;
		else if (i <= size / 2)
			rb(stack_b, 1);
		else
			rrb(stack_b, 1);
	}
	pa(stack_a, stack_b, 1);
}
