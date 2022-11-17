/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agomez-b <agomez-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 15:54:34 by agomez-b          #+#    #+#             */
/*   Updated: 2022/07/10 14:16:30 by agomez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_digit(char i, char j)
{
	write(1, &i, 1);
	write(1, &j, 1);
    if (i != '99' || j == '99')
	{
		write(1, ", ", 2);
	}
}

void ft_print_comb2(void)
{
	char i;
	char j;

	i = '0';
	while(i <= '98')
	{
		j = i + 1;
		while (j <= '99')
		{
			ft_print_digit(i, j);
			j++;
		}
		i++;
	}
}
