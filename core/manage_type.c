/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manage_type.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malatini <malatini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 15:42:59 by malatini          #+#    #+#             */
/*   Updated: 2021/03/10 10:55:14 by malatini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int		manage_type(t_format *s_format, va_list arg_ptr)
{
	if (s_format->type == SIGNED_INT)
		manage_i(s_format, arg_ptr);
	else if (s_format->type == UNSIGNED_INT)
		manage_u(s_format, arg_ptr);
	else if (s_format->type == CHAR)
		manage_c(s_format, arg_ptr);
	else if (s_format->type == CHAR_STAR)
		manage_s(s_format, arg_ptr);
	else if (s_format->type == PERCENT)
		manage_percent(s_format, arg_ptr);
	else if (s_format->type == HEXA)
		manage_hexa(s_format, arg_ptr);
	else if (s_format->type == POINTER)
		manage_pointer(s_format, arg_ptr);
	else
		return (ERROR);
	return (DONE);
}
