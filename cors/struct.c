/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malatini <malatini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 15:26:25 by malatini          #+#    #+#             */
/*   Updated: 2021/03/06 15:26:53 by malatini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ft_printf.c"

t_format*	ft_initialize_struct(void)
{
	t_format *format;
	format = &(t_format) { 0, 0, 1, 0, 0, 0, 0 };
	return (format);
}

int fill_dash_in_struct(char *str, t_format *format)
{
	int dash;

	dash = find_char(str, '-');
	if (dash == 1)
	{
		format->left_justify = 1;
		format->right_justif = 0;
	}
	return (dash);
}

int	fill_type_in_struct(char *str, t_format *format)
{
	int type;

	type = get_type(str);
	format->type = type;
	return (type);
}

int main(void)
{
	t_format *format;
	format = ft_initialize_struct();
	char str[10] = "%0*i";
	printf("Le type est: %i\n", get_type(str));
	fill_type_in_struct(str, format)
	return (0);
}
