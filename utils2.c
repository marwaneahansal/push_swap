/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahansal <mahansal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 11:02:27 by mahansal          #+#    #+#             */
/*   Updated: 2023/01/26 11:22:04 by mahansal         ###   ########.fr       */
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
void  exit_error(char *str, char **numbers)
{
  ft_putstr_fd("Error\n", 2);
  ft_putstr_fd(str, 2);
  ft_putstr_fd("\n", 2);
  if (numbers)
    free(numbers);
  exit(1);
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
