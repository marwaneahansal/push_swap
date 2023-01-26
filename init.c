/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahansal <mahansal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 18:00:34 by mahansal          #+#    #+#             */
/*   Updated: 2023/01/26 10:54:34 by mahansal         ###   ########.fr       */
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

int count_numbers(char **numbers)
{
  int i;

  i = 0;
  while (numbers[i])
    i++;
  return (i);
}

int check_numbers(int argc, char **argv, char **numbers)
{
  int i;
  int j;

  i = 1;
  if (numbers)
  {
    argc = count_numbers(numbers);
    argv = numbers;
    i = 0;
  }
  printf("argc = %d\n", argc);
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

t_node *fill_stack(int argc, char **argv, char **numbers)
{
  t_node *stack;
  t_node *new;
  int i;

  stack = NULL;
  i = 1;
  if (numbers)
  {
    argc = count_numbers(numbers);
    argv = numbers;
    i = 0;
  }
  while (i < argc)
  {
    new = lst_new(ft_atoi(argv[i]));
    lst_add_back(&stack, new);
    i++;
  }
  return (stack);
}