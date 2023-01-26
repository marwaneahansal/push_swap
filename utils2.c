/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahansal <mahansal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 11:02:27 by mahansal          #+#    #+#             */
/*   Updated: 2023/01/26 13:02:34 by mahansal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}

void  ft_putstr_fd(char *str, int fd)
{
  while (*str)
  {
    write(fd, str, 1);
    str++;
  }
  
}
void  exit_error(char *str)
{
  ft_putstr_fd("Error\n", 2);
  ft_putstr_fd(str, 2);
  ft_putstr_fd("\n", 2);
  exit(1);
}

void	free_dptr(char **ptr)
{
	int	i;

	i = 0;
	while (ptr[i])
	{
		free(ptr[i]);
		i++;
	}
	free(ptr);
}

int	ft_strcmp(const char *s1, const char *s2)
{
	size_t	index;

	index = 0;
	while (s1[index] != '\0' || s2[index] != '\0')
	{
		if ((unsigned char) s1[index] > (unsigned char) s2[index])
			return ((unsigned char) s1[index] - (unsigned char) s2[index]);
		else if ((unsigned char) s1[index] < (unsigned char) s2[index])
			return ((unsigned char) s1[index] - (unsigned char) s2[index]);
		index++;
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
