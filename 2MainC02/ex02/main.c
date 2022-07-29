/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psilva-o <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 18:05:10 by psilva-o          #+#    #+#             */
/*   Updated: 2022/07/28 17:42:22 by psilva-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int    ft_str_is_alpha(char *str);

int	main(void)
{
    int test;

    test = ft_str_is_alpha("charactersAlphabetic");
    printf("Wanted 1 - Awser: %d\n", test);

    test = ft_str_is_alpha("123testando");
    printf("Wanted 0: - Aswer: %d\n", test);

    test = ft_str_is_alpha("outros! 42");
    printf("Wanted 0: - Aswer: %d\n", test);

    test = ft_str_is_alpha("\0");
    printf("Wanted 1: - Aswer: %d\n", test);

    printf("end!\n");
}
