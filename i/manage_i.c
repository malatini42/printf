/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manage_i.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malatini <malatini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 12:00:04 by malatini          #+#    #+#             */
/*   Updated: 2021/03/09 19:17:38 by malatini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

//On est arriver jusque la en gardant la liste comme parametre
//on sait donc que le type est signed int

/*
int 	manage_zero_indicator_si(t_format *format, int arg)
{
	//faire les tests
}
*/

/*
int 	manage_dash_indicator_si(t_format *format, int arg)
{
	//faire les tests
}
*/

//Il faut gerer ca apres la precision et la width

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
