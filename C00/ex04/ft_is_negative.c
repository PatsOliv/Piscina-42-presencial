/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psilva-o <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 19:40:40 by psilva-o          #+#    #+#             */
/*   Updated: 2022/07/23 18:32:50 by psilva-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char r)

{
	write (1, &r, 1);
}

void	ft_is_negative(int n)
{
	if (n < 0)
		ft_putchar ('N');
	else
		ft_putchar ('P');
}
