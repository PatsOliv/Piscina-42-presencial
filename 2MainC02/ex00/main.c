/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psilva-o <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 16:12:03 by psilva-o          #+#    #+#             */
/*   Updated: 2022/07/28 17:19:46 by psilva-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char origin[] = "!Copia Essa!";
	char final[] = "Dentro Dessa";
	char *dest;

	printf("Original\n\tsrc: %s\n\tdes: %s\n", origin, final);

	dest = ft_strcpy(final, origin);

	printf("Destination\n\tsrc: %s\n\tdes: %s\n", origin, dest);
	return (0);
}
