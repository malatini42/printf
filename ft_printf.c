/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malatini <malatini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 21:34:06 by malatini          #+#    #+#             */
/*   Updated: 2021/03/03 21:51:09 by malatini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

//En c il est nécessaire d'avoir au moins un arg required
//pour printf a besoin de la format string
void	print_int(int num, ...)
{
	va_list args;
	va_start(args, num);
	int i;

	i = 0;
	while (i < num)
	{
		int value = va_arg(args, int);
		printf("%i, %i\n", i, value);
		i++;
	}
}
