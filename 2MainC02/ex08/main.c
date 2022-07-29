/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psilva-o <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 15:24:47 by psilva-o          #+#    #+#             */
/*   Updated: 2022/07/28 15:26:38 by psilva-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char    *ft_strlowcase(char *str);

int main(void)
{
    char frase1[14] = "EM CAIXA ALTA";
    char frase2[19] = "caixa ALTA e baixa";
    char frase3[19] = "acentos e coisas*!";
    char frase4[12] = "pontuação";
    char frase5[10] = "um NULL \0";
    char frase6[21] = "E um ESC \27 no meio";

    printf("todos os textos falam baixinho!\n");
    printf("%s\n", ft_strlowcase(frase1));
    printf("%s\n", ft_strlowcase(frase2));
    printf("%s\n", ft_strlowcase(frase3));
    printf("%s\n", ft_strlowcase(frase4));
    printf("%s\n", ft_strlowcase(frase5));
    printf("%s\n", ft_strlowcase(frase6));
    printf("End!\n");
}
