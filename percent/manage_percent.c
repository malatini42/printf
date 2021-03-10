/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manage_percent.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malatini <malatini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 16:16:16 by malatini          #+#    #+#             */
/*   Updated: 2021/03/10 17:39:35 by malatini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int		manage_percent(t_format *format)
{
	if (format->indicator[0] == 0 && format->indicator[1] == 0 &&
		format->width == 0 && format->precision == 0)
	{
		ft_putstr("%%");
		return (2);
	}
	return (0);
}