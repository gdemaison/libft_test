/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dynarray_insert.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maboye <maboye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 18:03:33 by gedemais          #+#    #+#             */
/*   Updated: 2024/06/11 21:10:04 by gedemais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static int		start_check(t_dynarray *arr, void *src, int index, bool insert)
{
	if (index < 0 || index > arr->nb_cells || check_space(arr))
		return (-1);
	if (index == arr->nb_cells)
	{
		insert ? dynarray_push(arr, src, 0) : dynarray_pop(arr, 0);
		return (1);
	}
	else if (index == 0)
	{
		insert ? dynarray_push(arr, src, 1) : dynarray_pop(arr, 1);
		return (1);
	}
	return (0);
}

int				dynarray_insert(t_dynarray *arr, void *src, int index)
{
	void	*mid;
	int		rest;
	int		ret;

	if ((ret = start_check(arr, src, index, true)))
		return (ret == -1 ? -1 : 0);
	mid = arr->arr + (index * arr->cell_size);
	rest = (arr->nb_cells - index + 1) * arr->cell_size;
	memcpy(arr->tmp, mid, rest);
	memcpy(mid, src, arr->cell_size);
	mid += arr->cell_size;
	memcpy(mid, arr->tmp, rest);
	++arr->nb_cells;
	return (0);
}

int				dynarray_extract(t_dynarray *arr, int index)
{
	void	*mid;
	int		rest;
	int		ret;

	if (arr == NULL || index < 0 || index > arr->byte_size / arr->cell_size)
		return (-1);

	if ((ret = start_check(arr, NULL, index, false)))
		return (ret == -1 ? -1 : 0);
	mid = arr->arr + (index * arr->cell_size);
	rest = (arr->nb_cells - index - 1) * arr->cell_size;
	memcpy(arr->tmp, mid + arr->cell_size, rest);
	memcpy(mid, arr->tmp, rest);
	--arr->nb_cells;
	return (0);
}
