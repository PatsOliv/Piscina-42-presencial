/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psilva-o <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 15:31:40 by psilva-o          #+#    #+#             */
/*   Updated: 2022/07/28 18:52:49 by psilva-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char    *ft_strcapitalize(char *str);

int main(void)
{
    char frase1[57] = "oi, *tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";
    char frase2[19] = "ALTA e baixa";
    char frase3[19] = "especiais*!";
    char frase4[12] = "pontuação";
    char frase5[10] = "um NULL \0";
    char frase6[21] = "E um ESC \27 no meio";

    printf("primeiro caracter em MAIUSCULO!\n");
    printf("%s\n", ft_strcapitalize(frase1));
    printf("%s\n", ft_strcapitalize(frase2));
    printf("%s\n", ft_strcapitalize(frase3));
    printf("%s\n", ft_strcapitalize(frase4));
    printf("%s\n", ft_strcapitalize(frase5));
    printf("%s\n", ft_strcapitalize(frase6));
    printf("End!\n");
}
