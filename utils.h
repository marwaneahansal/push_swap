/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahansal <mahansal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 14:07:11 by mahansal          #+#    #+#             */
/*   Updated: 2023/01/26 11:22:11 by mahansal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H

# define UTILS_H

#include "push_swap.h"

t_node  *lst_new(int value);
void    lst_add_back(t_node **head, t_node *new);
void    lst_add_front(t_node **head, t_node *new);
t_node  *lst_last(t_node *head);
int	    ft_atoi(const char *str);
char	  **ft_split(char const *s, char c);
void    ft_putstr_fd(char *s, int fd);
void    exit_error(char *str, char **numbers);
int     count_numbers(char **numbers);
int	    ft_isdigit(int c);
int	    ft_strcmp(const char *s1, const char *s2);

# endif