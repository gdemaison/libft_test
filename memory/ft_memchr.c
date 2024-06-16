/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maboye <maboye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 11:45:57 by maboye            #+#    #+#             */
/*   Updated: 2020/08/08 18:06:31 by maboye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void			*ft_memchr(const void *ptr, int c, size_t n)
{
	while (n--)
		if (*(unsigned char*)ptr++ == (unsigned char)c)
			return ((unsigned char *)ptr - 1);
	return (NULL);
}
