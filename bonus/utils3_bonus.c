/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils3_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahansal <mahansal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 02:21:19 by mahansal          #+#    #+#             */
/*   Updated: 2023/02/15 07:41:56 by mahansal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	count_numbers(char **numbers)
{
	int	i;

	i = 0;
	while (numbers[i])
		i++;
	return (i);
}

void	rrr(t_node **a, t_node **b)
{
	rra(a);
	rrb(b);
}
