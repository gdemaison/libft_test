/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maboye <maboye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 11:46:37 by maboye            #+#    #+#             */
/*   Updated: 2020/08/10 20:45:42 by maboye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char			*ft_strncat(char *dst, const char *src, size_t n)
{
	int	len;

	len = ft_strlen(dst);
	if (ft_strlen(src) < (int)n)
		ft_strcpy(dst + len, src);
	else
		ft_strncpy(dst + len, src, n);
	dst[len + n] = '\0';
	return (dst);
}
