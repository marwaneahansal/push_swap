/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahansal <mahansal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 18:59:22 by mahansal          #+#    #+#             */
/*   Updated: 2023/02/13 22:30:06 by mahansal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

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
}

void  ss(t_node **a, t_node **b)
{
  sa(a);
  sb(b);
}

void  pa(t_node **a, t_node **b)
{
  t_node  *tmp;

  if (!*b)
    return ;
  tmp = (*b)->next;
  (*b)->next = *a;
  *a = *b;
  *b = tmp;
}

void  pb(t_node **a, t_node **b)
{
  t_node  *tmp;

  if (!*a)
    return ;
  tmp = (*a)->next;
  (*a)->next = *b;
  *b = *a;
  *a = tmp;
}
