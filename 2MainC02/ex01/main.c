/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psilva-o <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 17:02:20 by psilva-o          #+#    #+#             */
/*   Updated: 2022/07/28 18:31:38 by psilva-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char  *ft_strncpy(char *dest, char *src, unsigned int n);

int	 main(void)
{
	char	source[] = "XXXXX XXXX";
	char	destination[] = "Essa string sera alterada";

	printf("%s\n", source);

	ft_strncpy(destination, source, 10);
	printf("%s\n", destination);
}
