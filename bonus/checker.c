/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahansal <mahansal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 20:41:37 by mahansal          #+#    #+#             */
/*   Updated: 2023/02/14 05:19:53 by mahansal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

char  *join_argv(int argc, char **argv)
{
	int i;
	int	j;
	char  *joined_argv;

	i = 1;
	joined_argv = NULL;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] == ' ')
			j++;
		if (argv[i][j] == '\0')
			exit_error();
		joined_argv = ft_strjoin(joined_argv, argv[i]);
		joined_argv = ft_strjoin(joined_argv, " ");
		i++;
	}
	return (joined_argv);
}

int main(int argc, char *argv[])
{
	t_node *stack_a;
	t_node *stack_b;
	char   **numbers;
	char   *joined_argv;
	char	*line;
	
	numbers = NULL;
	stack_a = NULL;
	stack_b = NULL;
	if (argc == 1)
		exit(0);
	joined_argv = join_argv(argc, argv);
	numbers = ft_split(joined_argv, ' ');
	init(numbers, &stack_a);
	line = get_next_line(0);
	while (line)
	{
		if (!ft_strcmp(line, "sa\n"))
			sa(&stack_a);
		else if (!ft_strcmp(line, "sb\n"))
			sb(&stack_b);
		else if (!ft_strcmp(line, "ss\n"))
			ss(&stack_a, &stack_b);
		else if (!ft_strcmp(line, "pa\n"))
			pa(&stack_a, &stack_b);
		else if (!ft_strcmp(line, "pb\n"))
			pb(&stack_a, &stack_b);
		else if (!ft_strcmp(line, "ra\n"))
			ra(&stack_a);
		else if (!ft_strcmp(line, "rb\n"))
			rb(&stack_b);
		else if (!ft_strcmp(line, "rr\n"))
			rr(&stack_a, &stack_b);
		else if (!ft_strcmp(line, "rra\n"))
			rra(&stack_a);
		else if (!ft_strcmp(line, "rrb\n"))
			rrb(&stack_b);
		else if (!ft_strcmp(line, "rrr\n"))
			rrr(&stack_a, &stack_b);
		else
			exit_error();
		free(line);
		line = get_next_line(0);
	}
	if (line)
		free(line);
	if (check_is_sorted(stack_a) && !stack_b)
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
	if (numbers)
		free_dptr(numbers);
	free_stack(stack_a);
	free_stack(stack_b);
	return (0);
}