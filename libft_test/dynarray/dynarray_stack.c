/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dynarray_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maboye <maboye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 18:04:36 by gedemais          #+#    #+#             */
/*   Updated: 2024/06/11 23:04:29 by gedemais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <pthread.h>

void			dynarray_pop(t_dynarray *arr, bool front)
{
	int		len;

	len = (arr->nb_cells - 1) * arr->cell_size;
	if (front)
	{
		memcpy(arr->tmp, (void *)(arr->arr + arr->cell_size), len);
		memcpy(arr->arr, arr->tmp, len);
	}
	if (arr->nb_cells)
		--arr->nb_cells;
}

int				dynarray_push(t_dynarray *arr, void *src, bool front)
{
	int		len;

	len = arr->nb_cells * arr->cell_size;
	if (check_space(arr))
		return (-1);
	if (front)
	{
		memcpy(arr->tmp, arr->arr, len);
		memcpy(arr->arr, src, arr->cell_size);
		memcpy((void *)(arr->arr + arr->cell_size), arr->tmp, len);
	}
	else 
		memcpy((void *)(arr->arr + len), src, arr->cell_size);
	++arr->nb_cells;

	return (0);
}

void			dynarray_replace_cell(t_dynarray *arr, void *src, int index)
{
	void	*ptr;

	if (arr == NULL || src == NULL || index < 0 || index >= arr->nb_cells)
		return ;

	ptr = arr->arr + (arr->cell_size * index);
	memcpy(ptr, src, arr->cell_size);
}

void			dynarray_swap_cells(t_dynarray *arr, int index1, int index2)
{
	void	*d1;
	void	*d2;

	if (arr == NULL
		|| index1 < 0
		|| index1 >= arr->nb_cells
		|| index1 < 0
		|| index1 >= arr->nb_cells)
		return ;

	d1 = dyacc(arr, index1);
	d2 = dyacc(arr, index2);
	memcpy(arr->tmp, d1, arr->cell_size);
	memcpy(d1, d2, arr->cell_size);
	memcpy(d2, arr->tmp, arr->cell_size);
}
