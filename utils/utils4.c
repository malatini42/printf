/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils4.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malatini <malatini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 11:34:07 by malatini          #+#    #+#             */
/*   Updated: 2021/03/11 14:02:39 by malatini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int		found_star(const char *str)
{
	int i;
	int found;

	i = 1;
	found = 0;
	while (str[i])
	{
		if (is_correct_type(str[i]))
			return (found);
		if (str[i] == '*')
			found++;
		i++;
	}
	return (found);
}

int		is_after_star(const char *str, char c)
{
	int i;

	i = 1;
	while (str[i])
	{
		while (str[i] != '*' && str[i])
			i++;
		if (str[++i] == c)
			return (1);
		i++;
	}
	return (0);
}
//Verifier qu on a bien le bon nombre d element dans va_list?
int		handle_star(const char *str, t_format *format, va_list arg_ptr)
{
	int star;
	int arg;

	arg = va_arg(arg_ptr, int);
	star = found_star(str);
	if (star == 1 && is_after_star(str, '.'))
		format->width = arg;
	else if (star == 1 && !(is_after_star(str, '.')))
		format->precision = arg;
	else if (star == 2)
	{
		format->width = arg;
		arg = va_arg(arg_ptr, int);
		format->precision = arg;
	}
	return (star);
}
