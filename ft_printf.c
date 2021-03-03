/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malatini <malatini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 21:34:06 by malatini          #+#    #+#             */
/*   Updated: 2021/03/03 22:36:42 by malatini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

//En c il est nécessaire d'avoir au moins un arg required
//pour printf a besoin de la format string

int printf(const char *format, ...)
{
	va_list args;
	int done;

	va_start(args, format);
	done = vfprintf(stdout, format, args);
	va_end(args);
	
	return (done);
}

int main(void)
{
	printf("Some we don't want to say.\n");
	printf("Mahaut says, \"Hello World\"\n");
}