/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malatini <malatini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 17:58:52 by malatini          #+#    #+#             */
/*   Updated: 2021/03/11 18:27:08 by malatini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	len_until_end_format(const char *str)
{
	int i;

	i = 1;
	while (str[i])
	{
		if (is_correct_type(str[i]))
			return (i);
		i++;
	}
	return (-1);
}