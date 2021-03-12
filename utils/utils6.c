/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils6.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malatini <malatini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 10:09:29 by malatini          #+#    #+#             */
/*   Updated: 2021/03/12 10:42:53 by malatini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

//outils print type_pc - reutilisable
char	c_padding_to_print(t_format *format)
{
	char to_print;

	if (format->flags.zero_pad == 1)
		to_print = '0';
	else
		to_print = ' ';
	return (to_print);
}

int		diff_width_type(t_format *format)
{
	int diff_width;

	diff_width = 0;
	if (format->type == PC && format->precision == 0)//Voir si impact precision?Test sur la precision ?
		diff_width = format->width - 1;
	return (diff_width);
}
