/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maboye <maboye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 13:57:04 by maboye            #+#    #+#             */
/*   Updated: 2022/09/01 19:14:25 by maboye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"


char	*ft_itoa(long long int n)
{
	char			*dest;
	long long int	nbr;
	int				size;

	if (n == 0)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == -9223372036854775807 - 1)
		return (ft_strdup("-9223372036854775808"));
	size = (n < 0) ? 1 : 0;
	nbr = (n < 0) ? -n : n;
	n = nbr;
	while (nbr > 0 && ++size)
		nbr = nbr / 10;
	if (!(dest = (char*)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	dest[size] = '\0';
	while (n > 0)
	{
		dest[--size] = (n % 10) + '0';
		n = n / 10;
	}
	dest[0] = (size) ? '-' : dest[0];
	return (dest);
}
