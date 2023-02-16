/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahansal <mahansal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 18:00:34 by mahansal          #+#    #+#             */
/*   Updated: 2023/02/15 07:53:11 by mahansal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*fill_stack(char **numbers)
{
	t_node		*stack;
	int			i;
	int			nbr_count;

	stack = NULL;
	i = 0;
	nbr_count = count_numbers(numbers);
	while (i < nbr_count)
	{
		ft_lstadd_back(&stack, lst_new(ft_atoi(numbers[i])));
		i++;
	}
	return (stack);
}

void	init(char **numbers, t_node **stack_a)
{
	if (!check_numbers(numbers)
		|| !check_maxmin_numbers(numbers))
	{
		if (numbers)
			free_dptr(numbers);
		exit_error();
	}
	*stack_a = fill_stack(numbers);
	if (!check_duplicates(*stack_a))
	{
		if (numbers)
			free_dptr(numbers);
		free_stack(*stack_a);
		exit_error();
	}
	if (check_is_sorted(*stack_a))
	{
		if (numbers)
			free_dptr(numbers);
		free_stack(*stack_a);
		exit(0);
	}
}
