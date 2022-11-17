/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agomez-b <agomez-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 16:00:50 by agomez-b          #+#    #+#             */
/*   Updated: 2022/07/20 16:03:58 by agomez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	k;

	if (to_find[0] == '\0')
		return (str);
	else
	{
		i = 0;
		while (str[i])
		{
			j = i;
			k = 0;
			while (str[j] == to_find[k])
			{
				if (to_find[k + 1] == '\0')
					return (&str[i]);
				k ++;
				j ++;
			}
			i ++;
		}
		return (0);
	}
}
