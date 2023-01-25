/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahansal <mahansal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 18:00:34 by mahansal          #+#    #+#             */
/*   Updated: 2023/01/25 18:09:59 by mahansal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}

int check_numbers(int argc, char **argv)
{
  int i;
  int j;

  i = 1;
  while (i < argc)
  {
    j = 0;
    while (argv[i][j])
    {
      if (argv[i][j] == '-' || argv[i][j] == '+')
        j++;
      if (!ft_isdigit(argv[i][j]))
        return (0);
      j++;
    }
    i++;
  }
  return (1);
}

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