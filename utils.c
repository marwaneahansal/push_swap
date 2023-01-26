/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahansal <mahansal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 13:52:51 by mahansal          #+#    #+#             */
/*   Updated: 2023/01/26 11:07:35 by mahansal         ###   ########.fr       */
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

int count_numbers(char **numbers)
{
  int i;

  i = 0;
  while (numbers[i])
    i++;
  return (i);
}
