#include "libft.h"

float			ft_map_flt(float input, float input_bounds[2], float output_bounds[2])
{
	float	input_bounds_size, output_bounds_size, f;

	if (input_bounds[0] >= input_bounds[1]
		|| output_bounds[0] >= output_bounds[1]
		|| input < input_bounds[0]
		|| input > input_bounds[1])
		return (input);

	input_bounds_size = input_bounds[1] - input_bounds[0];
	output_bounds_size = output_bounds[1] - output_bounds[0];

	f = (input - input_bounds[0]) / input_bounds_size;
	return (f * output_bounds_size + output_bounds[0]);
}
