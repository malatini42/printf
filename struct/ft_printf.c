/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malatini <malatini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 21:34:06 by malatini          #+#    #+#             */
/*   Updated: 2021/03/09 08:32:50 by malatini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

//renommer mes "format" en autre chose pour que ce soit plus clair ?

int		ft_printf(const char *format, ...)
{
	int count;
	char **f_strs;
	int i;

	//Est considere comme le premier argument facultatif?
	va_list arg_ptr;
	count = count_format(format);
	f_strs = split_format(format);
	i = 0;

	va_start(arg_ptr, format);
	//char *n = va_arg(arg_ptr, char *);
	va_end(arg_ptr);
	return (1);
}
