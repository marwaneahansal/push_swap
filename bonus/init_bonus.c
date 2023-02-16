/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahansal <mahansal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 18:00:34 by mahansal          #+#    #+#             */
/*   Updated: 2023/02/15 02:26:27 by mahansal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

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
		exit_error();
	}
}
