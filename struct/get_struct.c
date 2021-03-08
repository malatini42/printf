/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_struct.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malatini <malatini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 13:56:16 by malatini          #+#    #+#             */
/*   Updated: 2021/03/08 13:29:10 by malatini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int get_conversion_type(const char *str)
{
	int i;

	i = 0;
	while (!((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' &&
		str[i] <= 'Z')))
		i++;
	if (str[i] == 'i' || str[i] == 'd')
		return (SIGNED_INT);
	else if (str[i] == 'u')
		return (UNSIGNED_INT);
	else if (str[i] == 'c' || str[i] == 's')
		return (ALPHA);
	else if (str[i] == '%')
		return (PERCENT);
	else if (str[i] == 'x' || str[i] == 'X')
		return (HEXA);
	else if (str[i] == 'p')
		return (POINTER);
	//evoir eventuellement ce qu il faudrait faire dans ce cas ?
	else
		exit (ERROR);//Ici on devrait faire appel au gestionnaire du parametre non valide
	return (DONE);
}

/*
** Largeur est facultatif et arrive apres l indicateur s il y en a
** Largeur est un entier decimal non negatif qui controle le nombre minimal de
** caractere qui sont generes.
*/

//Faire une condition si il y a un indicateur et else
//Attention ca a l air d etre lent ?
//A revoir car elle peut etre undefined ou autre
int	get_width(const char *str)
{
	int width;
	int i;

	width = 0;
	i = 1;
	while (str[i] == '-' || str[i] == '0')
		i++;
	while (ft_isdigit(str[i]) && str[i])
	{
		width = width * 10 + str[i] - '0';
		i++;
	}
	return (width);
}

int get_precision(const char *str)
{
	int precision;
	int i;

	precision = 0;
	i = 1;
	while (str[i] && str[i] != '.')
		i++;
	i++;
	while (ft_isdigit(str[i]) && str[i])
	{
		precision = precision * 10 + str[i] - '0';
		i++;
	}
	printf("%i\n", precision);
	return (precision);
}
