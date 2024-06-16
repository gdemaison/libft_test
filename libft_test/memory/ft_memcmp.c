/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maboye <maboye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 11:46:02 by maboye            #+#    #+#             */
/*   Updated: 2020/08/08 17:45:54 by maboye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int				ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	u1;
	unsigned char	u2;

	if (!s1 || !s2)
		return (0);
	while (n--)
	{
		u1 = *(unsigned char *)s1;
		u2 = *(unsigned char *)s2;
		if (u1 != u2)
			return (u1 - u2);
		s1++;
		s2++;
	}
	return (0);
}
