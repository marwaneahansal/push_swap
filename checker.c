/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahansal <mahansal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 20:41:37 by mahansal          #+#    #+#             */
/*   Updated: 2023/02/12 04:16:17 by mahansal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"
#include "unistd.h"

int main(int argc, char *argv[])
{
	(void) argc;
	(void) argv;
	char buffer[10];
	read(0, buffer, 10);
	printf("buffer: %s\n", buffer);
}