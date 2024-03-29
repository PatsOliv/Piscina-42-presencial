/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psilva-o <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 15:29:52 by psilva-o          #+#    #+#             */
/*   Updated: 2022/07/28 18:53:39 by psilva-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int				i;
	unsigned char	c;
	int				first;

	i = 0;
	first = 1;
	while (str[i] != '\0')
	{
		c = str[i];
		if (first == 1 && c >= 'a' && c <= 'z')
			str[i] = c - 32;
		if (first == 0 && c >= 'A' && c <= 'Z')
			str[i] = c + 32;
		first = 0;
		if (!((c >= 48 && c <= 57) || \
		(c >= 65 && c <= 90) || (c >= 97 && c <= 122) || \
		c >= 127))
			first = 1;
		i++;
	}
	return (str);
}
