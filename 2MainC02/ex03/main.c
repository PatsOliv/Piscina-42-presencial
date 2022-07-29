/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psilva-o <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 13:43:30 by psilva-o          #+#    #+#             */
/*   Updated: 2022/07/28 17:43:07 by psilva-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int ft_str_is_numeric(char *str);

int main(void)
{
  printf("Wanted 0, Awser = %d\n", ft_str_is_numeric("123.45"));
	printf("Wanted 1, Awser = %d\n", ft_str_is_numeric("123456"));
	printf("Wanted 1, Awser = %d\n", ft_str_is_numeric("\0"));
	printf("Wanted 0, Awser = %d\n", ft_str_is_numeric("423fail"));
	printf("end!\n");
}
