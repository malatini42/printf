/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malatini <malatini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 21:34:08 by malatini          #+#    #+#             */
/*   Updated: 2021/03/06 13:33:32 by malatini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdarg.h>
# include <string.h>
# include <unistd.h>

//Faire des enum pour les types etc ?
typedef struct	s_format
{
	char	type;
	int		left_justify_width;
	int		number;
	int		dot_number;
	int		star;
	int		dot_star;
}				t_format;

int		ft_printf(const char *format, ...);

/*
** pf_numeric.c
*/

int is_numeric_conv(char c);

/*
** pf_alpha.c
*/

int is_alpha_conv(char c);

/*
** pf_percent.c
*/

/*
** pf_pointer.c
*/

/*
** pf_cors.c
*/

t_format	*ft_initialize_struct(void);

#endif

