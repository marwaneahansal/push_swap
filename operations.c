/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahansal <mahansal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 18:59:22 by mahansal          #+#    #+#             */
/*   Updated: 2023/01/25 17:16:27 by mahansal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void  sa(t_node **a, int write_op)
{
  t_node *tmp;
  t_node *tmp2;

  if (!*a || !(*a)->next)
    return ;
  tmp = *a;
  tmp2 = tmp->next;
  tmp->next = tmp2->next;
  tmp2->next = tmp;
  *a = tmp2;
  if (write_op)
    write(1, "sa\n", 3);
}

void  sb(t_node **b, int write_op)
{
  t_node *tmp;
  t_node *tmp2;

  if (!*b || !(*b)->next)
    return ;
  tmp = *b;
  tmp2 = tmp->next;
  tmp->next = tmp2->next;
  tmp2->next = tmp;
  *b = tmp2;
  if (write_op)
    write(1, "sb\n", 3);
}

void  ss(t_node **a, t_node **b)
{
  sa(a, 0);
  sb(b, 0);
  write(1, "ss\n", 3);
}

void  pa(t_node **a, t_node **b, int write_op)
{
  t_node  *tmp;

  if (!*b)
    return ;
  tmp = (*b)->next;
  (*b)->next = *a;
  *a = *b;
  *b = tmp;
  if (write_op)
    write(1, "pa\n", 3);
}

void  pb(t_node **a, t_node **b, int write_op)
{
  t_node  *tmp;

  if (!*a)
    return ;
  tmp = (*a)->next;
  (*a)->next = *b;
  *b = *a;
  *a = tmp;
  if (write_op)
    write(1, "pb\n", 3);
}
