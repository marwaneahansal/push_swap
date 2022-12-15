/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahansal <mahansal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 13:52:51 by mahansal          #+#    #+#             */
/*   Updated: 2022/12/15 14:13:14 by mahansal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"
#include <stdio.h>

t_node *lst_new(int value)
{
  t_node *new;

  new = malloc(sizeof(t_node));
  if (!new)
    return (NULL);
  new->value = value;
  new->next = NULL;
  new->prev = NULL;
  return (new);
}

void  lst_add_back(t_node **head, t_node *new)
{
  t_node *last;

  if (!*head)
  {
    *head = new;
    return ;
  }
  last = *head;
  while (last->next)
    last = last->next;
  last->next = new;
  new->prev = last;
}

void  print_list(t_node *head)
{
  t_node *tmp;

  tmp = head;
  while (tmp)
  {
    printf("%d | ", tmp->value);
    tmp = tmp->next;
  }
}