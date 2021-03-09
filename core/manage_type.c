/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manage_type.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malatini <malatini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 15:42:59 by malatini          #+#    #+#             */
/*   Updated: 2021/03/09 15:43:02 by malatini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int		manage_type(t_format *s_format)
{
	if (s_format->type == SIGNED_INT)
		manage_signed_int(s_format);
	else if (s_format->type == UNSIGNED_INT)
		manage_unsigned_int(s_format);
	else if (s_format->type == CHAR)
		manage_char(s_format);
	else if (s_format->type == CHAR_STAR)
		manage_char_star(s_format);
	else if (s_format->type == PERCENT)
		manage_percent(s_format);
	else if (s_format->type == HEXA)
		manage_hexa(s_format);
	else if (s_format->type == POINTER)
		manage_pointer(s_format);
	else
		return (ERROR);
	return (DONE);
}
