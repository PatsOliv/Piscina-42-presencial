/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psilva-o <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 14:02:14 by psilva-o          #+#    #+#             */
/*   Updated: 2022/07/28 17:45:26 by psilva-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int    ft_str_is_lowercase(char *str);

int main(void)
{
    printf("Wanted 1, Awser: %d\n", ft_str_is_lowercase("somentetextoemcaixabaixa"));
    printf("Wanted 0, Awser: %d\n", ft_str_is_lowercase("Textocomcaixaalta"));
    printf("Wanted 1, Awser: %d\n", ft_str_is_lowercase("\0"));
    printf("Wanted 0, Awser: %d\n", ft_str_is_lowercase("42 falha"));
    printf("Wanted 0, Awser: %d\n", ft_str_is_lowercase("somente baixa mas com acento!"));
    printf("End!\n");
}
