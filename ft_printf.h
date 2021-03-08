/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malatini <malatini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 21:34:08 by malatini          #+#    #+#             */
/*   Updated: 2021/03/08 11:55:13 by malatini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//verifier les fonctions mentionnees
//En fin de journee faire le menage et organisation pour que ce soit propre.
#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdarg.h>
# include <string.h>
# include <unistd.h>
# include <stdlib.h>

# define ERROR -1
# define DONE 0
# define SIGNED_INT 1
# define UNSIGNED_INT 2
# define ALPHA 3
# define PERCENT 4
# define HEXA 5
# define POINTER 6

//Faire des enum pour les types etc ?
typedef struct	s_format
{
	int indicator[2];//0 = 0 et 1 = dash
	int width;
	int	precision;
	int length;
	int size;
	int	type;
}				t_format;

int		ft_printf(const char *format, ...);

/*
** pf_numeric.c
*/

int is_numeric_conv(char c);//Plus utilise ?

/*
** pf_alpha.c
*/

int is_alpha_conv(char c);//Plus utilise ?

/*
** pf_percent.c
*/

/*
** pf_pointer.c
*/

/*
** UTILS
*/

int		found_char(char *str, char c);
int		is_correct_type(char c);
int		ft_isdigit(int c);

/*
** struct part
*/

t_format	ft_initialize_struct(void);

/*
** get_struct
*/
int			get_conversion_type(char *str);
int			get_width(char *str);
int			get_precision(char *str);

int			fill_dash_indicator(char *str, t_format *format);
int			fill_type(char *str, t_format *format);
int			fill_zero_indicator(char *str, t_format *format);
void		fill_struct_element(char *str, t_format *format);
int			fill_width(char *str, t_format *format);
int			fill_precision(char *str, t_format *format);

int			count_format(char *str);
char		*ft_format_dup(char *str);
char		**split_format(char *str);

#endif

