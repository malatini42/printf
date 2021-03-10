/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manage_type.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malatini <malatini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 15:42:59 by malatini          #+#    #+#             */
/*   Updated: 2021/03/10 19:15:38 by malatini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

//Attention a l'ajout du [j] qui met un peu le bazarre

int		manage_type(const char *format, int j)
{
	//t_format	*s_format;
	(void)j;
	char		**strs;
	
	strs = split_format(format);
	printf("%s\n", strs[0]);
	/*
	if (!(is_correct_spec(strs[j])))
		return (0);
	s_format = declare_initialize_struct(strs[j]);
	if (s_format->type == SIGNED_INT)
		return(manage_i(s_format));
	else if (s_format->type == UNSIGNED_INT)
		return(manage_u(s_format));
	else if (s_format->type == CHAR)
		return(manage_c(s_format));
	else if (s_format->type == CHAR_STAR)
		return(manage_s(s_format));
	else if (s_format->type == PERCENT)
		return(manage_percent(s_format));
	else if (s_format->type == HEXA)
		return(manage_hexa(s_format));
	else if (s_format->type == POINTER)
		return(manage_pointer(s_format));
	*/
	return (DONE);
}
