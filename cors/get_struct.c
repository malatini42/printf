/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_struct.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malatini <malatini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 13:56:16 by malatini          #+#    #+#             */
/*   Updated: 2021/03/07 15:03:09 by malatini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int get_conversion_type(char *str)
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
