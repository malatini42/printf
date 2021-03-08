/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_struct.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malatini <malatini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 13:55:56 by malatini          #+#    #+#             */
/*   Updated: 2021/03/08 13:29:30 by malatini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

//je retourne des int mais je pourrais retourner void techniquement
//Attention je ne peux pas rajouter de fonction dans ce fichier

int		fill_dash_indicator(const char *str, t_format *format)
{
	int dash;

	dash = found_char(str, '-');
	if (dash == 1)
	{
		format->indicator[1] = 1;
	}
	return (dash);
}

int fill_zero_indicator(const char *str, t_format *format)
{
	if (found_char(str, '-') == 1)
	{
		format->indicator[0] = 0;
		format->indicator[1] = 1;
		return (0);
	}
	else
	{
		//Attention a revoir cette partie la en cas d erreur
		if (str[1] == '0')
		{
			format->indicator[0] = 1;
			format->indicator[1] = 0;
			return (1);
		}
	}
	return (0);
}

int	fill_width(const char *str, t_format *format)
{
	int width;

	width = get_width(str);
	format->width = width;
	return (width);
}

int fill_precision(const char *str, t_format *format)
{
	int precision;

	precision = get_precision(str);
	format->precision = precision;
	return (precision);
}

int		fill_type(const char *str, t_format *format)
{
	int type;

	type = get_conversion_type(str);
	format->type = type;
	return (type);
}
