/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations2_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahansal <mahansal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 17:22:27 by mahansal          #+#    #+#             */
/*   Updated: 2023/02/15 07:44:31 by mahansal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ra(t_node **a)
{
	t_node	*tmp;

	if (!*a || !(*a)->next)
		return ;
	tmp = *a;
	*a = (*a)->next;
	tmp->next = NULL;
	ft_lstadd_back(a, tmp);
}

void	rb(t_node **b)
{
	t_node	*tmp;

	if (!*b || !(*b)->next)
		return ;
	tmp = *b;
	*b = (*b)->next;
	tmp->next = NULL;
	ft_lstadd_back(b, tmp);
}

void	rr(t_node **a, t_node **b)
{
	ra(a);
	rb(b);
}

void	rra(t_node **a)
{
	t_node	*tmp;
	t_node	*tmp2;

	if (!*a || !(*a)->next)
		return ;
	tmp = *a;
	while (tmp->next->next)
		tmp = tmp->next;
	tmp2 = tmp->next;
	tmp->next = NULL;
	ft_lstadd_front(a, tmp2);
}

void	rrb(t_node **b)
{
	t_node	*tmp;
	t_node	*tmp2;

	if (!*b || !(*b)->next)
		return ;
	tmp = *b;
	while (tmp->next->next)
		tmp = tmp->next;
	tmp2 = tmp->next;
	tmp->next = NULL;
	ft_lstadd_front(b, tmp2);
}
