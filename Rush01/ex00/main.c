/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psilva-o <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 14:22:20 by psilva-o          #+#    #+#             */
/*   Updated: 2022/07/17 15:06:39 by psilva-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_check_error(int *c, char **v);

int	main(int argc, char *argv[])
{
	if (ft_check_error(&argc, argv))
	{
		write(1, "Error\n", 6);
		return (1);
	}
	else
		write(1, "Error\n", 6);
	return (0);
}

int	ft_check_error(int *c, char **v)
{
	int		n;
	char	input[16];

	if (*c != 2)
		return (1);
	n = 0;
	while (v[1][n] <= '\0')
	{
		if (v[1][n] > '0' && v[1][n] < '5')
			input[n] = v[1][n] + '0';
		if (input[n] != '1' || input[n] != '2' || input[n] != '3'
			|| input[n] != '4')
			return (1);
		n++;
	}
	return (0);
}
