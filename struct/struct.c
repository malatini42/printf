/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malatini <malatini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 15:26:25 by malatini          #+#    #+#             */
/*   Updated: 2021/03/08 18:45:03 by malatini         ###   ########.fr       */
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
	format.type = 0;
	return (format);
}

void	fill_struct_element(char *str, t_format *format)
{
	fill_dash_indicator(str, format);
	fill_zero_indicator(str, format);
	fill_width(str, format);
	fill_precision(str, format);
	fill_type(str, format);
}


//A tester
t_format	*di_all_structs(const char *str)
{
	t_format f_str[count_format(str)];
	int i;

	i = 0;
	while (i < count_format(str))
	{
		f_str[i] = ft_initialize_struct();
		fill_struct_with_element(str, f_str[i]);
		i++;
	}
	f_str[i] = ft_initialize_struct();
	return (f_str);
}