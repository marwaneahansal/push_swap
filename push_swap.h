/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahansal <mahansal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 18:04:46 by mahansal          #+#    #+#             */
/*   Updated: 2023/02/13 22:19:48 by mahansal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H

# define PUSH_SWAP_H

typedef struct s_node
{
  int value;
  struct s_node *next;
} t_node;

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <limits.h>

void  sa(t_node **a, int write_op);
void  sb(t_node **b, int write_op);
void  ss(t_node **a, t_node **b, int write_op);
void  pa(t_node **a, t_node **b, int write_op);
void  pb(t_node **a, t_node **b, int write_op);
void  ra(t_node **a, int write_op);
void  rb(t_node **b, int write_op);
void  rr(t_node **a, t_node **b, int write_op);
void  rra(t_node **a, int write_op);
void  rrb(t_node **b, int write_op);
void  rrr(t_node **a, t_node **b, int write_op);

int     check_numbers(char **numbers);
int     check_duplicates(t_node *stack_a);
int     check_maxmin_numbers(char **numbers);
int     check_is_sorted(t_node *stack);

t_node  *lst_new(int value);
void    ft_lstadd_back(t_node **head, t_node *new);
void    ft_lstadd_front(t_node **head, t_node *new);
int     ft_lstsize(t_node *head);

char	  **ft_split(char const *s, char c);
int	    ft_atoi(const char *str);

void    ft_putstr_fd(char *s, int fd);
void    exit_error(void);
int     count_numbers(char **numbers);
int	    ft_isdigit(int c);
int	    ft_strcmp(const char *s1, const char *s2);
void	  free_dptr(char **ptr);
void    free_stack(t_node *head);

t_node  *fill_stack(char **numbers);
void    init(char **numbers, t_node **stack_a);

void  start_sort(t_node **stack_a, t_node **stack_b);

char	*ft_strjoin(char *s1, char *s2);
char	*ft_strdup(char *s1);

int   get_min_index(t_node *stack);
int   get_max_index(t_node *stack);
void  push_a_b(t_node **stack_a, t_node **stack_b, int *tab, int division);
void  fill_tab(int **tab, t_node *stack_a);
int   *sort_tab(t_node *stack_a, int size);
void  push_back(t_node **stack_a, t_node **stack_b, int size);

void  sort_two(t_node **stack_a);
void  sort_three(t_node **stack_a);
void  sort_four(t_node **stack_a, t_node **stack_b);
void  sort_five(t_node **stack_a, t_node **stack_b);
void  sort_big(t_node **stack_a, t_node **stack_b, int division);

#endif
