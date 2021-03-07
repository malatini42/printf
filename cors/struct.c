/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malatini <malatini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 15:26:25 by malatini          #+#    #+#             */
/*   Updated: 2021/03/07 14:50:05 by malatini         ###   ########.fr       */
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

void fill_struct_element(char *str, t_format *format)
{
	fill_type(str, format);
	fill_dash_indicator(str, format);
	fill_zero_indicator(str, format);
}
