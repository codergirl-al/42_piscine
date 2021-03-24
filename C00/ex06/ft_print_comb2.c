/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeposhi <apeposhi@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/21 16:20:32 by apeposhi          #+#    #+#             */
/*   Updated: 2021/03/22 09:03:43 by apeposhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char ff, char fs, char sf, char ss)
{
	write(1, &ff, 1);
	write(1, &fs, 1);
	write(1, " ", 1);
	write(1, &sf, 1);
	write(1, &ss, 1);
	if (!(ff == 57 && fs == 56 && sf == 57 && ss == 57))
	{
		write(1, ", ", 2);
	}
}

void	ft_first_num(char ff, char fs, char sf, char ss)
{
	sf = ff - 1;
	while (sf++ < 57)
	{
		ss = fs;
		if (sf > ff)
		{
			ss = 47;
		}
		while (ss++ < 57)
		{
			ft_putchar(ff, fs, sf, ss);
		}
	}
}

void	ft_print_comb2(void)
{
	char ff;
	char fs;
	char sf;
	char ss;

	ff = 47;
	sf = 48;
	ss = 48;
	while (ff++ < 58)
	{
		fs = 47;
		while (fs++ < 57)
		{
			ft_first_num(ff, fs, sf, ss);
		}
	}
}
