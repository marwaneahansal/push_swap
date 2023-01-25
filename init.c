/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahansal <mahansal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 18:00:34 by mahansal          #+#    #+#             */
/*   Updated: 2023/01/25 18:01:57 by mahansal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node *fill_stack(int argc, char **argv)
{
  t_node *stack;
  t_node *new;
  int i;

  i = 1;
  stack = NULL;
  while (i < argc)
  {
    new = lst_new(ft_atoi(argv[i]));
    lst_add_back(&stack, new);
    i++;
  }
  return (stack);
}