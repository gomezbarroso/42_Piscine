/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agomez-b <agomez-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 19:30:53 by agomez-b          #+#    #+#             */
/*   Updated: 2022/07/14 19:36:22 by agomez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
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
