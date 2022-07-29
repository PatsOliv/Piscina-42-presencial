/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psilva-o <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 14:36:46 by psilva-o          #+#    #+#             */
/*   Updated: 2022/07/28 22:16:49 by psilva-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int    ft_str_is_printable(char *str);

int main(void)
{
    printf("Wanted 1, Return: %d\n", ft_str_is_printable("SOMENTE TEXTO EM CAIXA ALTA"));
    printf("Wanted 1, Return: %d\n", ft_str_is_printable("Texto com caixa ALTA e baixa"));
    printf("Wanted 1, Return: %d\n", ft_str_is_printable("*!"));
    printf("Wanted 1, Return: %d\n", ft_str_is_printable("Texto com pontuacao."));
    printf("Wanted 1, Return: %d\n", ft_str_is_printable("\0"));
    printf("Wanted 0, Return: %d\n", ft_str_is_printable("Agora, um TAB \t"));
    printf("End!\n");
}
