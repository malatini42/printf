/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_struct_values.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malatini <malatini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 13:55:56 by malatini          #+#    #+#             */
/*   Updated: 2021/03/10 21:45:26 by malatini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

//revoir les fonctions, revoir les parametres
bool	justify_left(const char *str, t_format *format)
{
	bool dash;

	//voir si le cas fonctionne
	dash = (bool)found_char(str, '-');
	if (dash == true)
		format->flags.justify_left = true;
	return (dash);
}

bool	zero_pad(const char *str, t_format *format)
{
	if (found_char(str, '-') == 1)
	{
		format->flags.zero_pad = false;
		format->flags.justify_left = true;
		return (false);
	}
	else
	{
		if (str[1] == '0')
		{
			format->flags.zero_pad = true;
			format->flags.justify_left = false;	
		}
		return (true);
	}
}

int		fill_width(const char *str, t_format *format, int *printed_chars)
{
	int width;

	//revoir si ok
	width = get_width(str, printed_chars);
	format->width = width;
	return (width);
}

int		fill_precision(const char *str, t_format *format, int *printed_chars)
{
	int precision;

	//revoir si ok
	precision = get_precision(str, printed_chars);
	format->precision = precision;
	return (precision);
}

int		fill_type(const char *str, t_format *format, int *printed_chars)
{
	int type;

	//revoir si la printed chars correspond bien
	type = get_type(str, printed_chars);
	format->type = type;
	return (type);
}