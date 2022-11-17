/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agomez-b <agomez-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 19:47:38 by agomez-b          #+#    #+#             */
/*   Updated: 2022/07/18 11:37:45 by agomez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	char	*start;

	start = str;
	if (*str >= 'a' && *str <= 'z')
	{
		*str = *str - 32;
	}
	++ str;
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
		{
			*str = *str + 32;
		}
		if (!(*(str - 1) >= '0' && *(str -1) <= '9')
			&& !(*(str - 1) >= 'a' && *(str -1) <= 'z')
			&& !(*(str - 1) >= 'A' && *(str -1) <= 'Z')
			&& *str >= 'a' && *str <= 'z')
		{
			*str = *str -32;
		}
		++ str;
	}
	return (start);
}
