/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cors.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malatini <malatini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 13:15:07 by malatini          #+#    #+#             */
/*   Updated: 2021/03/06 13:34:39 by malatini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.c"

t_format*	ft_initialize_struct(void)
{
	t_format *format;
	format = &(t_format) { 0, 0, 0, 0, 0, 0 };
	return (format);
}

/*
int main(void)
{
	t_format *format;
	format = ft_initialize_struct();
	return (0);
}
*/
