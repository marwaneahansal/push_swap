/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahansal <mahansal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 11:02:27 by mahansal          #+#    #+#             */
/*   Updated: 2023/01/26 11:16:15 by mahansal         ###   ########.fr       */
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