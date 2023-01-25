/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahansal <mahansal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 13:52:51 by mahansal          #+#    #+#             */
/*   Updated: 2023/01/25 17:43:13 by mahansal         ###   ########.fr       */
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

t_node  *lst_last(t_node *lst)
{
  while (lst)
	{
		if (!lst->next)
			return (lst);
		lst = lst->next;
	}
	return (lst);
}

void	lst_add_front(t_node **lst, t_node *new)
{
	new->next = *lst;
	*lst = new;
}