/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsuomins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 18:50:19 by fsuomins          #+#    #+#             */
/*   Updated: 2022/07/10 22:20:46 by casoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_putchar(char r);

int	mid(int g_y, int g_x, int ym, int xm)
{
	if (g_y > 1 && g_y < ym && g_x == 1)
	{
		ft_putchar ('-');
		return (1);
	}
	else if ((g_x > 1 && g_x < xm && g_y == ym))
	{
		ft_putchar ('|');
		return (1);
	}
	else if (g_x > 1 && g_x < xm && g_y == 1)
	{
		ft_putchar ('|');
		return (1);
	}
	else if ((g_y > 1 && g_y < ym && g_x == xm))
	{
		ft_putchar ('-');
		return (1);
	}
	else
	{
		return (0);
	}
}

int	corn(int g_y, int g_x, int ym, int xm)
{
	if ((g_x == 1 && g_y == 1) || (g_x == xm && g_y == ym))
	{
		ft_putchar ('o');
		return (1);
	}
	else if ((g_x == 1 && g_y == ym) || (g_x == xm && g_y == 1))
	{
		ft_putchar ('o');
		return (1);
	}
	else
	{
		return (0);
	}
}

void	rush(int ym, int xm)
{
	int	g_y;
	int	g_x;

	g_y = 1;
	g_x = 1;
	while (g_x <= xm)
	{
	g_y = 1;
		while (g_y <= ym)
		{
			if ((corn (g_y, g_x, ym, xm)) || (mid(g_y, g_x, ym, xm)))
			{
				g_y++;
			}
			else
			{
				ft_putchar (' ');
				g_y++;
			}
		}	
		g_x++;
		ft_putchar ('\n');
	}
}
