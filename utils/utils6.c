/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils6.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malatini <malatini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 10:09:29 by malatini          #+#    #+#             */
/*   Updated: 2021/03/12 16:16:21 by malatini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

//outils print type_pc - reutilisable
char	c_padding_to_print(t_format *format)
{
	char to_print;

	to_print = ' ';
	if (format->flags.zero_pad == 1)
		to_print = '0';
	return (to_print);
}

//en cours pour pc, tester pour les autres
int		diff_width(t_format *format)
{
	int diff_width;

	diff_width = 0;
	/*
	printf("2----------------\n");
	printstruct(format);
	printf("2----------------\n");
	*/
	if (format->precision == 0)
		diff_width = format->width - 1;
	//printf("La diff width est: %i\n", diff_width);
	return (diff_width);
}
