/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeposhi <apeposhi@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/21 16:18:56 by apeposhi          #+#    #+#             */
/*   Updated: 2021/03/21 16:29:50 by apeposhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char f, char s, char t)
{
	write(1, &f, 1);
	write(1, &s, 1);
	write(1, &t, 1);
	if (f != 55)
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char f;
	char s;
	char t;

	f = 48;
	while (f <= 55)
	{
		s = f + 1;
		while (s <= 56)
		{
			t = s + 1;
			while (t <= 57)
			{
				ft_putchar(f, s, t);
				t++;
			}
			s++;
		}
		f++;
	}
}
