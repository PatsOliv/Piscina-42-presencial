/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psilva-o <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 18:01:58 by psilva-o          #+#    #+#             */
/*   Updated: 2022/07/25 18:11:04 by psilva-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	cen;
	char	dez;
	char	uni;

	cen = '0';
	while (cen <= '7')
	{
		dez = cen + 1;
		while (dez <= '8')
		{
			uni = dez + 1;
			while (uni <= '9')
			{
				write(1, &cen, 1);
				write(1, &dez, 1);
				write(1, &uni, 1);
				if (cen != '7')
					write(1, ", ", 2);
				uni++;
			}
			dez++;
		}
		cen++;
	}
}
