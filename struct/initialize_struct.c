/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialize_struct.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malatini <malatini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 15:26:25 by malatini          #+#    #+#             */
/*   Updated: 2021/03/10 21:47:27 by malatini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

//revoir si ok
t_format	*ft_initialize_struct(void)
{
	t_format *format;

	if (!(format = (t_format *)malloc(sizeof(t_format))))
		return (NULL);
	format->flags.justify_left = false;
	format->flags.zero_pad = false;
	format->width = 0;
	format->precision  = 0;
	format->type = 0;
	return (format);
}

//pas possible - a revoir
/*
void	fill_struct_element(char *str, t_format *format)
{
	fill_dash_indicator(str, format);
	fill_zero_indicator(str, format);
	fill_width(str, format);
	fill_precision(str, format);
	fill_type(str, format);
}
*/

//A revoir
t_format	*declare_initialize_struct(char *str)
{
	t_format	*format;

	(void)str;
	if (!(format = (t_format *)malloc(sizeof(format) * 1)))
		return (NULL);
	format = ft_initialize_struct();
	//fill_struct_element(str, format);
	return (format);
}

//Cette fonction et toutes les fonctions associees vont probablement etre inutiles
/*
t_format	*di_all_structs(const char *str)
{
	t_format	*f_str;
	int			i;
	int			count;
	char		**splitted_format;

	count = count_total_format(str);
	if (!(f_str = (t_format *)malloc(sizeof(t_format) * (count))))
		return (NULL);
	splitted_format = split_format(str);
	i = 0;
	while (i < count)
	{
		f_str[i] = ft_initialize_struct();
		fill_struct_element(splitted_format[i], &f_str[i]);
		i++;
	}
	f_str[i] = ft_initialize_struct();
	return (f_str);
}
*/