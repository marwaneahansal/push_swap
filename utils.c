/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahansal <mahansal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 13:52:51 by mahansal          #+#    #+#             */
/*   Updated: 2023/01/26 13:07:50 by mahansal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

t_node *lst_new(int value)
{
  t_node *new;

  new = malloc(sizeof(t_node));
  if (!new)
    return (NULL);
  new->value = value;
  new->next = NULL;
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
}

void	lst_add_front(t_node **lst, t_node *new)
{
  if (!lst || !new)
    return ;
	new->next = *lst;
	*lst = new;
}

void  free_stack(t_node *head)
{
  t_node *tmp;
  t_node *next;

  tmp = head;
  while (tmp)
  {
    next = tmp->next;
    free(tmp);
    tmp = next;
  }
}
