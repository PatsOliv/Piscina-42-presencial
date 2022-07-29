/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psilva-o <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 14:12:41 by psilva-o          #+#    #+#             */
/*   Updated: 2022/07/28 17:46:26 by psilva-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int    ft_str_is_uppercase(char *str);

int main(void)
{
    printf("Wanted 1, Return: %d\n", ft_str_is_uppercase("SOMENTEMAIUSCULA"));
    printf("Wanted 0, Return: %d\n", ft_str_is_uppercase("TextoMISTUrado"));
    printf("Wanted 0, Return: %d\n", ft_str_is_uppercase("42"));
    printf("Wanted 1, Return: %d\n", ft_str_is_uppercase("\0"));
    printf("Wanted 0, Return: %d\n", ft_str_is_uppercase("SOMENTEALTAMASCOMACENTO!"));
    printf("End!\n");
}
