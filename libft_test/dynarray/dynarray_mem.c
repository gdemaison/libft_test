/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dynarray_mem.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maboye <maboye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 18:04:09 by gedemais          #+#    #+#             */
/*   Updated: 2024/06/11 21:59:24 by gedemais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static int		realloc_content(t_dynarray *arr)
{
	void	*tmp;
	int		prev_size;

	prev_size = arr->byte_size;
	arr->byte_size += arr->byte_size;
	free(arr->tmp);
	if (!(tmp = ft_memalloc(arr->byte_size))
		|| !(arr->tmp = ft_memalloc(arr->byte_size)))
		return (-1);
	memcpy(tmp, arr->arr, prev_size);
	free(arr->arr);
	arr->arr = tmp;
	return (0);
}

int				check_space(t_dynarray *arr)
{
	while ((arr->nb_cells + 1) * arr->cell_size >= arr->byte_size)
		if (realloc_content(arr))
			return (-1);
	return (0);
}

void			dynarray_clear(t_dynarray *arr, bool flush)
{
	arr->nb_cells = 0;
	if (flush)
	{
		bzero(arr->arr, arr->byte_size);
		bzero(arr->tmp, arr->byte_size);
	}
}
