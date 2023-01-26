/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahansal <mahansal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 10:59:02 by mahansal          #+#    #+#             */
/*   Updated: 2023/01/26 13:10:50 by mahansal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

int check_duplicates(int argc, char **argv, char **numbers)
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
  while (i < argc)
  {
    j = i + 1;
    while (j < argc)
    {
      if (ft_strcmp(argv[i], argv[j]) == 0)
        return (0);
      j++;
    }
    i++;
  }
  return (1);
}

int is_maxmin_int(char *str)
{
  int i;
  long long number;

  i = 0;
  number = 0;
  if (str[i] == '-' || str[i] == '+')
    i++;
  while (str[i])
  {
    number = number * 10 + (str[i] - '0');
    i++;
  }
  if (str[0] == '-')
    number = -number;
  if (number > INT_MAX || number < INT_MIN)
    return (1);
  return (0);
}

int check_maxmin_numbers(int argc, char **argv, char **numbers)
{
  int i;

  i = 1;
  if (numbers)
  {
    argc = count_numbers(numbers);
    argv = numbers;
    i = 0;
  }
  while (i < argc)
  {
    if (is_maxmin_int(argv[i]))
      return (0);
    i++;
  }
  return (1);
}

int check_is_sorted(t_node *stack)
{
  t_node *tmp;

  tmp = stack;
  while (tmp->next)
  {
    if (tmp->value > tmp->next->value)
      return (0);
    tmp = tmp->next;
  }
  return (1);
}