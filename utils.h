/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahansal <mahansal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 14:07:11 by mahansal          #+#    #+#             */
/*   Updated: 2023/01/25 16:59:12 by mahansal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H

# define UTILS_H

#include "push_swap.h"

t_node  *lst_new(int value);
void    lst_add_back(t_node **head, t_node *new);
int	    ft_atoi(const char *str);

# endif