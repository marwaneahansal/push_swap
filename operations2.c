/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahansal <mahansal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 17:22:27 by mahansal          #+#    #+#             */
/*   Updated: 2023/02/02 19:48:41 by mahansal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void  ra(t_node **a, int write_op)
{
  t_node *tmp;

  if (!*a || !(*a)->next)
    return ;
  tmp = *a;
  *a = (*a)->next;
  tmp->next = NULL;
  ft_lstadd_back(a, tmp);
  if (write_op)
    write(1, "ra\n", 3);
}

void  rb(t_node **b, int write_op)
{
  t_node *tmp;

  if (!*b || !(*b)->next)
    return ;
  tmp = *b;
  *b = (*b)->next;
  tmp->next = NULL;
  ft_lstadd_back(b, tmp);
  if (write_op)
    write(1, "rb\n", 3);
}

void  rr(t_node **a, t_node **b)
{
  ra(a, 0);
  rb(b, 0);
  write(1, "rr\n", 3);
}

void  rra(t_node **a, int write_op)
{
  t_node *tmp;
  t_node *tmp2;

  if (!*a || !(*a)->next)
    return ;
  tmp = *a;
  // get before the last node
  while (tmp->next->next)
		tmp = tmp->next;
  tmp2 = tmp->next;
  tmp->next =  NULL;
  ft_lstadd_front(a, tmp2);
  if (write_op)
    write(1, "rra\n", 4);
}

void  rrb(t_node **b, int write_op)
{
  t_node *tmp;
  t_node *tmp2;

  if (!*b || !(*b)->next)
    return ;
  tmp = *b;
  // get before the last node
  while (tmp->next->next)
		tmp = tmp->next;
  tmp2 = tmp->next;
  tmp->next =  NULL;
  ft_lstadd_front(b, tmp2);
  if (write_op)
    write(1, "rrb\n", 4);
}

void  rrr(t_node **a, t_node **b)
{
  rra(a, 0);
  rrb(b, 0);
  write(1, "rrr\n", 4);
}