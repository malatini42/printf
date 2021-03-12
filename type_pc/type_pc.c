/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_pc.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malatini <malatini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 16:16:16 by malatini          #+#    #+#             */
/*   Updated: 2021/03/12 11:49:43 by malatini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

//Pourquoi on aurait besoin de str ? A priori pas besoin

int		print_pc(const char *str, t_format *format, int *printed_chars)
{
	(void)str;
	char to_print;
	int nb_pad;

	to_print = c_padding_to_print(format);
	nb_pad = diff_width_type(format);
	while (nb_pad > 0)
	{
		ft_putchar(to_print);
		//printed_chars++;
		nb_pad--;
	}
	ft_putchar('%');
	//printed_chars++;
	//pas les bonnes valeurs de retour
	return (*printed_chars);
	//return (format->width > 0 ? (*printed_chars += format->width) : (*printed_chars));
	//return  (*printed_chars);
}
