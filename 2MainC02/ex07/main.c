/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psilva-o <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 15:05:11 by psilva-o          #+#    #+#             */
/*   Updated: 2022/07/28 17:47:25 by psilva-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char    *ft_strupcase(char *str);

int main(void)
{
    char frase1[14] = "EM CAIXA ALTA";
    char frase2[19] = "caixa ALTA e baixa";
    char frase3[19] = "acentos e coisas*!";
    char frase4[12] = "OkoK";
    char frase5[10] = "um NULL \0";
    char frase6[21] = "E um ESC \27 no meio";

    printf("TODOS OS TEXTOS GRITAM!\n");
    printf("%s\n", ft_strupcase(frase1));
    printf("%s\n", ft_strupcase(frase2));
    printf("%s\n", ft_strupcase(frase3));
    printf("%s\n", ft_strupcase(frase4));
    printf("%s\n", ft_strupcase(frase5));
    printf("%s\n", ft_strupcase(frase6));
    printf("END!\n");
}
