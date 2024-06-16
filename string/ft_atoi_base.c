/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maboye <maboye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 23:29:19 by maboye            #+#    #+#             */
/*   Updated: 2020/08/08 16:24:11 by maboye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static int		get_char_value(char c)
{
	const char		*base = "0123456789abcdef";
	int				i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

long			ft_atoi_base(const char *str, unsigned int base)
{
	long	result;
	int		i;
	int		tmp;

	i = 0;
	result = 0;
	if (str == 0 || base > 16)
		return (0);
	if (base == 16 && str[0] == '0' && str[1] == 'x')
		i = 2;
	while ((tmp = get_char_value(ft_tolower(str[i]))) != -1)
	{
		result = result * base + tmp;
		++i;
	}
	return (result);
}
