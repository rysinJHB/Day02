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

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_comb2(void)
{
	char a;
	char b;
	char c;
	char d;

    a = '0';
	while(a <= '9')
	{
		b = '0';
		while(b <= '8')
		{
			c = '0';
			while(c <= '9')
			{
				d = '1';
				while(d <= '9')
				{
					ft_putchar(a);
					ft_putchar(b);
					ft_putchar(' ');
					ft_putchar(c);
					ft_putchar(d);
					if ( c == '9' && d == '9')
					{
						break;
					}	
					ft_putchar(',');
					ft_putchar(' ');
					d++;
				}
				c++;
			}
			b++;
		}
		a++;
	}
}
	
int main (void){
	ft_print_comb2();}                                                     
