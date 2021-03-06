/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malatini <malatini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 21:34:08 by malatini          #+#    #+#             */
/*   Updated: 2021/03/06 16:46:43 by malatini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdarg.h>
# include <string.h>
# include <unistd.h>
# include <stdlib.h>

# define ERROR -1
# define DONE 0
# define NUMERIC 1
# define ALPHA 2
# define PERCENT 3
# define HEXA 4
# define POINTER 5

//Faire des enum pour les types etc ?
typedef struct	s_format
{
	int	type;
	int	left_justify;
	int	right_justify;
	int	number;
	int	star;
	int	dot_number;
	int	dot_star;
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

/*
** struct part
*/
t_format	ft_initialize_struct(void);
int		get_conversion_type(char *str);
int		find_char(char *str, char c);
int		fill_dash_in_struct(char *str, t_format *format);
int		fill_type_in_struct(char *str, t_format *format);

#endif

