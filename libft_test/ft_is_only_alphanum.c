#include "libft.h"

int ft_is_only_alphanum(const char *s, const char *exceptions)
{
	char	*total_exceptions;

	if (!(total_exceptions = ft_strjoin(exceptions, "0123456789")))
		return (0);

	return (ft_is_only_alpha(s, total_exceptions));
}
