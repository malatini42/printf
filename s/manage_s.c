/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manage_s.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malatini <malatini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 19:20:21 by malatini          #+#    #+#             */
/*   Updated: 2021/03/09 19:20:36 by malatini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int		manage_i(t_format *format, va_list arg_ptr)
{
	(void)format;
	(void)arg_ptr;
	/*
	if (format->indicator[0] == 1)
		manage_zero_indicator_si(format, arg);
	else if (format->indicator[1] == 1)
		manage_dash_indicator_si(format, arg);
	*/
	return (0);
}