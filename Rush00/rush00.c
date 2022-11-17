/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agomez-b <agomez-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 16:37:32 by ubegona           #+#    #+#             */
/*   Updated: 2022/07/03 21:41:46 by agomez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rush(int x, int y);
void	ft_putchar(char c);

int	absolut(int A)
{
	if (A < 0)
	{
		A = A * -1;
	}
	return (A);
}

void	hacerlinea(int x, char a, char b)
{
	int	j;

	j = 0;
	if (x > 1)
	{
		ft_putchar(a);
	}
	while (j < (x - 2))
	{
		ft_putchar(b);
		j++;
	}
	if (x > 0)
	{
		ft_putchar(a);
		ft_putchar('\n');
	}
}

void	avisosinicio(int columnas, int filas)
{
	if (columnas == 0 || filas == 0)
	{
		write(1, "\nNo hay rectángulo. Motivo: Alguno o", 37);
		write(1, " varios parámetros que has establecido son", 43);
		write(1, " igual a 0. Si quieres visualizar un rectángulo,", 50);
		write(1, " te sugerimos que establezcas parámetros", 41);
		write(1, " positivos como x=42, y=42.\n", 30);
	}	
	else if (columnas < 0 || filas < 0)
	{
		write(1, "\n¡Ups! Parece que estás probando a visualizar", 47);
		write(1, " un rectángulo con parámetros negativos. Como", 48);
		write(1, " suponemos que has metido el negativo sin querer,", 49);
		write(1, " te mostramos cómo se vería el rectángulo con tus", 52);
		write(1, " mismos parámetros, pero en absoluto. Aquí tienes:\n\n", 54);
	}
}

void	rush(int x, int y)
{
	int	i;

	i = 0;
	avisosinicio(x, y);
	x = absolut(x);
	y = absolut(y);
	while (i < y)
	{
		if (i == 0)
		{
			hacerlinea(x, 'o', '-');
		}
		i++;
		if (i > 1 && i != y)
		{
			hacerlinea(x, '|', ' ');
		}
		if (i == y && y >= 2)
		{
			hacerlinea (x, 'o', '-');
		}
	}
}
