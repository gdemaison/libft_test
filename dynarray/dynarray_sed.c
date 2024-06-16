#include "../libft.h"
#include "dynarray.h"

int dynarray_sed(t_dynarray *arr, void *pattern, void *replace, size_t params[4])
{
	size_t	start, end, pattern_size, replace_size, index;
	void	*tmp;

	start = params[0];
	end = params[1]; 
	pattern_size = params[2];
	replace_size = params[3];

	if (arr == NULL || pattern == NULL || replace == NULL
		|| start >= arr->nb_cells || end >= arr->nb_cells || start > end)
		return (-1);

	while ((tmp = dynarray_find(arr, pattern, start, &index)))
	{
		if (index < end - pattern_size + 1 && memcmp(tmp, pattern, pattern_size * arr->cell_size) == 0)
		{
			for (size_t i = 0; i < pattern_size; i++)
				dynarray_extract(arr, (int)index);
			for (size_t i = 0; i < replace_size; i++)
				dynarray_insert(arr, replace + (i * arr->cell_size), (int)i + (int)index);
		}
		else
			break;
	}
	return (0);
}
