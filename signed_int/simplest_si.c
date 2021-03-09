/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simplest_si.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malatini <malatini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 12:00:04 by malatini          #+#    #+#             */
/*   Updated: 2021/03/09 12:13:00 by malatini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

//je veux faire des if en fonction de ce qu il y a dans la struct
//revoir le nom, pas terrible - faire une grosse fonction et voir comment
//on pourra decouper - en l'état on ne peut pas fonctionner comme ca

int		simplest_si(t_format *format)
{
	int i;

	i = 0;
	if (format->indicator[0] == 0 && format->indicator[0] == 0 && format->width == 0 &&
		format->precision == 0 && format->type == UNSIGNED_INT)
		//printf et return
	return (0);
}