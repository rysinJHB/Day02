/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rysin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 14:20:06 by rysin             #+#    #+#             */
/*   Updated: 2020/07/12 14:20:08 by rysin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
write(1, &c, 1);
}
void    ft_print_comb2(void)
{
        char    first;
        char    second;

        first = '0' - 1;
        while (++first <= '9')
        {
                second = first;
                while (++second <= '9')
                {
                        
                        {
                                ft_putchar(first);
                                ft_putchar(second);
                                if (first != '7' || second != '8')
                                {
                                        ft_putchar(',');
                                        ft_putchar(' ');
                                }
                             
                        }
                }
        }
}

int main (void)
{ft_print_comb2();}                                                     
