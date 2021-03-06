/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malatini <malatini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 15:26:25 by malatini          #+#    #+#             */
/*   Updated: 2021/03/06 16:57:22 by malatini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

t_format	ft_initialize_struct(void)
{
	t_format format;

	format.type = 0;
	format.left_justify = 0;//equivalent dash
	format.right_justify = 1;//comportement par defaut
	format.number  = 0;
	format.star = 0;
	format.dot_number = 0;
	format.dot_star = 0;// revoir star et dot_star ?
	//format = { .type = 0, .left_justify = 0, .right_justify = 1, .number = 0, .star = 0, .dot_number = 0, .dot_star = 0 };
	return (format);
}

int		fill_dash_in_struct(char *str, t_format *format)
{
	int dash;

	dash = find_char(str, '-');
	if (dash == 1)
	{
		format->left_justify = 1;
		format->right_justify = 0;
	}
	return (dash);
}

int		fill_type_in_struct(char *str, t_format *format)
{
	int type;

	type = get_conversion_type(str);
	format->type = type;
	return (type);
}
