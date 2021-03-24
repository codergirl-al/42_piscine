/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeposhi <apeposhi@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 15:10:48 by apeposhi          #+#    #+#             */
/*   Updated: 2021/03/22 15:27:48 by apeposhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int temp[size];
	int i;
	int j;

	i = 0;
	j = size - 1;
	while (i < size)
	{
		temp[j] = tab[i];
		i++;
		j--;
	}
	i = 0;
	while (i < size)
	{
		tab[i] = temp[i];
		i++;
	}
}
