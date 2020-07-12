/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rysin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 14:16:29 by rysin             #+#    #+#             */
/*   Updated: 2020/07/12 14:16:43 by rysin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

include <stdio.h>

void    ft_print_alphabet(void)
{
    char    letter;

    letter = 'a';
    while (letter <= 'z')
    {
        putchar(letter);
        letter++;
    }
}

int main(void)
{
    ft_print_alphabet();
    return 0;
}
