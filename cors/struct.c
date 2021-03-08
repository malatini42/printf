/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malatini <malatini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 15:26:25 by malatini          #+#    #+#             */
/*   Updated: 2021/03/08 11:54:02 by malatini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

t_format	ft_initialize_struct(void)
{
	t_format format;

	format.indicator[0] = 0;
	format.indicator[1] = 0;
	format.width = 0;
	format.precision  = 0;
	format.size = 0;
	format.type = 0;
	return (format);
}

//Je vais faire un structure pour chaque chaine formattee rencontree
//A verifier quand toutes les fonctions seront faites
void fill_struct_element(char *str, t_format *format)
{
	fill_dash_indicator(str, format);
	fill_zero_indicator(str, format);
	fill_width(str, format);
	fill_precision(str, format);
	//fill_size(str, format);
	fill_type(str, format);
}
