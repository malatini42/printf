/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_type.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malatini <malatini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 15:42:59 by malatini          #+#    #+#             */
/*   Updated: 2021/03/10 21:37:51 by malatini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

//revoir la strategie pour la struct

int		get_type(const char *format, int *printed_chars)
{
	//faire une condition en fonction de printed_chars !
	int i;

	i = 0;
	while (!((format[i] >= 'a' && format[i] <= 'z') || (format[i] >= 'A' &&
		format[i] <= 'Z')))
		i++;
	if (format[i] == 'i' || format[i] == 'd' || format[i] == 'u')
		return (UID);
	else if (format[i] == 'c')
		return (C);
	else if (format[i] == 's')
		return (S);
	else if (format[i] == '%')
		return (PC);
	else if (format[i] == 'x' || format[i] == 'X')
		return (H);
	else if (format[i] == 'p')
		return (P);
	else
		return (-1);
	return (0);
}
