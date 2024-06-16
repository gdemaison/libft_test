/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maboye <maboye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 13:19:59 by maboye            #+#    #+#             */
/*   Updated: 2020/08/08 18:14:32 by maboye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "../libft.h"

void			ft_putstr_fd(char const *str, int fd)
{
	str ? write(fd, str, ft_strlen(str)) : 0;
}
