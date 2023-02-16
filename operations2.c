/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahansal <mahansal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 17:22:27 by mahansal          #+#    #+#             */
/*   Updated: 2023/02/15 07:42:37 by mahansal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_node **a, int write_op)
{
	t_node	*tmp;

	if (!*a || !(*a)->next)
		return ;
	tmp = *a;
	*a = (*a)->next;
	tmp->next = NULL;
	ft_lstadd_back(a, tmp);
	if (write_op)
		write(1, "ra\n", 3);
}

void	rb(t_node **b, int write_op)
{
	t_node	*tmp;

	if (!*b || !(*b)->next)
		return ;
	tmp = *b;
	*b = (*b)->next;
	tmp->next = NULL;
	ft_lstadd_back(b, tmp);
	if (write_op)
		write(1, "rb\n", 3);
}

void	rr(t_node **a, t_node **b, int write_op)
{
	ra(a, 0);
	rb(b, 0);
	if (write_op)
		write(1, "rr\n", 3);
}

void	rra(t_node **a, int write_op)
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
	if (write_op)
		write(1, "rra\n", 4);
}

void	rrb(t_node **b, int write_op)
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
	if (write_op)
		write(1, "rrb\n", 4);
}
