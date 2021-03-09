/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_struct_values.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malatini <malatini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 13:56:16 by malatini          #+#    #+#             */
/*   Updated: 2021/03/09 14:18:26 by malatini         ###   ########.fr       */
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
	else if (str[i] == 'c')
		return (CHAR);
	else if (str[i] == 's')
		return (CHAR_STAR);
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

//Attention il faudrait verifier qu aucun '-' ne soit rentre
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
	return (precision);
}
