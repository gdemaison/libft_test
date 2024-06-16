/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dynarray.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maboye <maboye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/08 19:13:14 by maboye            #+#    #+#             */
/*   Updated: 2024/06/12 18:09:52 by gedemais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DYNARRAY_H
# define DYNARRAY_H

typedef struct	s_dynarray
{
	void            *arr; // Main storage buffer pointer
	void            *tmp; // Temporary storage buffer pointer, useful for many operations.
	size_t          cell_size; // Size 
	size_t          nb_cells; // Number of cells stored in the array
	size_t          byte_size; // Size in bytes of all stored cells
}				t_dynarray;

void			*dyacc(t_dynarray *arr, int index);
void			dynarray_free(t_dynarray *arr);
int				dynarray_init(t_dynarray *arr, size_t cell_size, size_t nb_cells);
void			dynarray_clear(t_dynarray *arr, bool flush);

int				dynarray_insert(t_dynarray *arr, void *src, int index);
int				dynarray_extract(t_dynarray *arr, int index);

int				check_space(t_dynarray *arr);

void			dynarray_sort(t_dynarray *arr,
					int (*compare)(void *a, void *b));
void			dynarray_quicksort(t_dynarray *arr, int low, int high,
					int (*compare)(void *a, void *b));

void			dynarray_pop(t_dynarray *arr, bool front);
int				dynarray_push(t_dynarray *arr, void *src, bool front);
void			dynarray_replace_cell(t_dynarray *arr, void *src, int index);
void			dynarray_swap_cells(t_dynarray *add, int index1, int index2);

void			*dynarray_find(t_dynarray *arr, void *cell, size_t offset, size_t *result);
int				dynarray_map(t_dynarray *arr, int (*process)(void *cell, void *param), void *param);
int				dynarray_sed(t_dynarray *arr, void *pattern, void *replace, size_t params[4]);

#endif
