/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_struct_values.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malatini <malatini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 13:56:16 by malatini          #+#    #+#             */
/*   Updated: 2021/03/10 21:49:34 by malatini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

//faire une condition pour printed_chars
int		get_width(const char *str, int *printed_chars)
{
	int width;
	int i;
	(void)printed_chars;

	width = 0;
	i = 1;
	while (str[i] == '-' || str[i] == '0')
		i++;
	while (ft_isdigit(str[i]) && str[i])
	{
		width = width * 10 + str[i] - '0';
		i++;
	}
	return (width);
}

//revoir
int		get_precision(const char *str, int *printed_chars)
{
	int precision;
	int i;
	(void)printed_chars;

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
	return (precision);
}
