/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahansal <mahansal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 10:59:02 by mahansal          #+#    #+#             */
/*   Updated: 2023/02/10 00:11:56 by mahansal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int check_numbers(char **numbers)
{
  int i;
  int j;
  int nbr_count;

  i = 0;
  nbr_count = count_numbers(numbers);
  while (i < nbr_count)
  {
    j = 0;
    while (numbers[i][j])
    {
      if (numbers[i][j] == '-' || numbers[i][j] == '+')
        j++;
      if (!ft_isdigit(numbers[i][j]))
        return (0);
      j++;
    }
    i++;
  }
  return (1);
}

int check_duplicates(t_node *stack_a)
{
  t_node  *tmp;
  t_node  *tmp2;

  tmp = stack_a;
  while (tmp)
  {
    tmp2 = tmp->next;
    while (tmp2)
    {
      if (tmp->value == tmp2->value)
        return (0);
      tmp2 = tmp2->next;
    }
    tmp = tmp->next;
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

int check_maxmin_numbers(char **numbers)
{
  int i;
  int nbr_count;

  i = 0;
  nbr_count = count_numbers(numbers);
  while (i < nbr_count)
  {
    if (is_maxmin_int(numbers[i]))
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