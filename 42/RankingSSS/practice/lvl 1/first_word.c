/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heouahes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/23 15:08:56 by heouahes          #+#    #+#             */
/*   Updated: 2020/08/27 00:17:11 by heouahes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main (int ac, char **av)
{
	int i = 0;
	if (ac == 2)
	{
		while ((av[1][i] == ' ') || (av[1][i] == '\t'))
			i++;
		while (av[1][i] != ' ' && av[1][i] != '\0' && av[1][i] != '\t')
		{
			write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
