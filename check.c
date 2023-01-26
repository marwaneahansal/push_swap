/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahansal <mahansal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 10:59:02 by mahansal          #+#    #+#             */
/*   Updated: 2023/01/26 11:25:05 by mahansal         ###   ########.fr       */
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