/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahansal <mahansal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 18:59:22 by mahansal          #+#    #+#             */
/*   Updated: 2022/12/15 19:13:31 by mahansal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void  sa(t_node **a)
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
  write(1, "sa\n", 3);
}

void  sb(t_node **b)
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
  write(1, "sb\n", 3);
}

void  ss(t_node **a, t_node **b)
{
  sa(a);
  sb(b);
  write(1, "ss\n", 3);
}
