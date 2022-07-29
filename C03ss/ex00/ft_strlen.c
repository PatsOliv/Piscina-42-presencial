/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psilva-o <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 21:26:44 by psilva-o          #+#    #+#             */
/*   Updated: 2022/07/28 21:27:33 by psilva-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	char	caracter;
	int		index;

	index = 0;
	caracter = 0;
	while (str[index] != caracter)
	{
		index++;
	}
	return (index);
}
