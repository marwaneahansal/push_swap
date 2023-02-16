/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahansal <mahansal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 01:37:04 by mahansal          #+#    #+#             */
/*   Updated: 2023/02/15 07:41:43 by mahansal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	count_numbers(char **numbers)
{
	int	i;

	i = 0;
	while (numbers[i])
		i++;
	return (i);
}

int	*sort_tab(t_node *stack_a, int size)
{
	int	*tab;
	int	i;
	int	j;
	int	tmp;

	i = 0;
	j = 0;
	tab = malloc(size * sizeof(int));
	fill_tab(&tab, stack_a);
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				tmp = tab[i];
				tab[i] = tab[j];
				tab[j] = tmp;
			}
			j++;
		}
		i++;
	}
	return (tab);
}

void	rrr(t_node **a, t_node **b, int write_op)
{
	rra(a, 0);
	rrb(b, 0);
	if (write_op)
		write(1, "rrr\n", 4);
}
