/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agomez-b <agomez-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 15:57:04 by agomez-b          #+#    #+#             */
/*   Updated: 2022/07/20 16:00:05 by agomez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	char	*start;

	i = 0;
	start = dest;
	if (nb == 0)
	{
		return (0);
	}
	while (*dest != '\0')
	{
		dest ++;
	}
	while (*src != '\0' && (i < nb))
	{
		*dest = *src;
		dest ++;
		src ++;
		i ++;
	}
	*dest = '\0';
	return (start);
}
