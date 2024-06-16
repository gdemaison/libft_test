/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dynarray.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maboye <maboye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 18:02:41 by gedemais          #+#    #+#             */
/*   Updated: 2024/06/11 21:37:52 by gedemais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void			*dyacc(t_dynarray *arr, int index)
{
	if (arr == NULL || index > arr->nb_cells || index < 0)
		return (NULL);
	return ((void *)(arr->arr + (index * arr->cell_size)));
}

void			dynarray_free(t_dynarray *arr)
{
	if (arr) {
		free(arr->arr);
		free(arr->tmp);
		memset(arr, 0, sizeof(t_dynarray));
	}
}

static int		start_size(int size)
{
	int	n;

	n = 2;
	while (size >= n)
		n += n;
	return (n);
}

int				dynarray_init(t_dynarray *arr, size_t cell_size, size_t nb_cells)
{
	if (cell_size <= 0 || nb_cells < 0 || arr == NULL)
		return (-1);
	arr->cell_size = cell_size;
	arr->nb_cells = 0;
	arr->byte_size = start_size(cell_size * nb_cells + 1);
	if (arr->byte_size > 0
		&& (!(arr->arr = ft_memalloc(arr->byte_size))
		|| !(arr->tmp = ft_memalloc(arr->byte_size))))
		return (-1);
	memset(arr->arr, 0, arr->byte_size);
	return (0);
}
