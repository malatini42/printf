/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_struct_values.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malatini <malatini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 13:56:16 by malatini          #+#    #+#             */
/*   Updated: 2021/03/12 12:12:30 by malatini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int		get_width(const char *str, t_format *format)
{
	int width;
	int i;

	width = 0;
	i = 1;
	while (str[i] == '-' || str[i] == '0')
		i++;
	while (ft_isdigit(str[i]) && str[i])
	{
		width = width * 10 + str[i] - '0';
		i++;
	}
	format->width = width;
	return (width);
}

int		get_precision(const char *str, t_format *format)
{
	int precision;
	int i;

	precision = 0;
	i = 1;
	while (str[i] && str[i] != '.')
		i++;
	i++;
	while (ft_isdigit(str[i]) && str[i])
	{
		precision = precision * 10 + str[i] - '0';
		i++;
	}
	format->precision = precision;
	return (precision);
}

int		get_type(const char *format)
{
	int i;

	i = 0;
	while (!(is_correct_type(format[i])) && format[i])
		i++;
	if (format[i] == 'i' || format[i] == 'd' || format[i] == 'u')
		return (UID);
	else if (format[i] == 'c')
		return (C);
	else if (format[i] == 's')
		return (S);
	else if (format[i] == '%')
		return (PC);
	else if (format[i] == 'x' || format[i] == 'X')
		return (H);
	else if (format[i] == 'p')
		return (P);
	else
		return (-1);
	return (0);
}

int		print_type(const char *format, t_format *spec, int *printed_chars)
{
	int type;
	(void)spec;
	(void)printed_chars;
	type = get_type(format);
	if (type == PC)
		return (print_pc(format, spec, printed_chars));
	/*
	else if (type == UID)
		return (print_uid(format));
	else if (type == C)
		return (print_c(format));
	else if (type == S)
		return (print_s(format));
	else if (type == H)
		return (print_pc(format));
	else if (type == P)
		return (print_p(format));
	else
		return (-1);
	*/
	return (0);
}
