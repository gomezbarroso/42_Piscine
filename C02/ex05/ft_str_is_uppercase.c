/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agomez-b <agomez-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 19:34:26 by agomez-b          #+#    #+#             */
/*   Updated: 2022/07/14 19:37:24 by agomez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (*str != '\0')
	{
		if (*str >= 'A' && *str <= 'Z')
		{
			i = 1;
		}
		else
		{
			i = 0;
			break ;
		}
		str ++;
	}
	if (*str == '\0')
	{
		i = 1;
	}
	return (i);
}
