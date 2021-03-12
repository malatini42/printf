/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_pc.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malatini <malatini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 16:16:16 by malatini          #+#    #+#             */
/*   Updated: 2021/03/12 16:43:53 by malatini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

//Pourquoi on aurait besoin de str ? A priori pas besoin

void	print_pc(t_format *format)
{
	char to_print;
	int nb_pad;
	int i;

	i = 0;
	to_print = c_padding_to_print(format);
	nb_pad = diff_width(format);
	while (nb_pad > 0)
	{
		ft_putchar(to_print);
		i++;
		nb_pad--;
	}
	ft_putchar('%');
	i++;
	format->printed_chars += i;
}
