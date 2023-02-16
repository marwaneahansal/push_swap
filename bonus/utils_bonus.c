/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahansal <mahansal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 13:52:51 by mahansal          #+#    #+#             */
/*   Updated: 2023/02/15 02:19:16 by mahansal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

t_node	*lst_new(int value)
{
	t_node	*new;

	new = malloc(sizeof(t_node));
	if (!new)
		return (NULL);
	new->value = value;
	new->next = NULL;
	return (new);
}

void	ft_lstadd_back(t_node **head, t_node *new)
{
	t_node	*last;

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

void	ft_lstadd_front(t_node **head, t_node *new)
{
	if (!head || !new)
		return ;
	new->next = *head;
	*head = new;
}

int	ft_lstsize(t_node *head)
{
	int		i;

	i = 0;
	while (head)
	{
		i++;
		head = head->next;
	}
	return (i);
}

void	free_stack(t_node *head)
{
	t_node	*tmp;
	t_node	*next;

	tmp = head;
	while (tmp)
	{
		next = tmp->next;
		free(tmp);
		tmp = next;
	}
}
