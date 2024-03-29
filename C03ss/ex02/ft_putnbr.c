/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psilva-o <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 21:31:28 by psilva-o          #+#    #+#             */
/*   Updated: 2022/07/28 21:31:39 by psilva-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_recursive(int nb)
{
	char	num_char;

	if (nb / 10 == 0)
	{
		num_char = nb + '0';
		write(1, &num_char, 1);
	}
	else
	{
		ft_putnbr_recursive(nb / 10);
		num_char = (nb % 10) + '0';
		write(1, &num_char, 1);
	}
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		write(1, "-", 1);
		if (nb == -2147483648)
		{
			nb += 2000000000;
			write(1, "2", 1);
		}
		nb *= -1;
	}
	ft_putnbr_recursive(nb);
}
