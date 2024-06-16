/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maboye <maboye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 11:46:43 by maboye            #+#    #+#             */
/*   Updated: 2020/08/10 20:39:09 by maboye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char			*ft_strncpy(char *dst, const char *src, size_t n)
{
	int	i;

	i = -1;
	while (src[++i] && (i < (int)n))
		dst[i] = src[i];
	while (i < (int)n)
		dst[i++] = '\0';
	return (dst);
}
