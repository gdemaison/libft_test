#include "libft.h"

int ft_is_only_alpha(const char *s, const char *exceptions)
{
	bool exception;

	if (s == NULL || s[0] == 0)
		return (0);
	for (unsigned int i = 0; s[i]; i++)
	{
		if (ft_isalpha(s[i]) == 0)
		{
			exception = false;
			if (exceptions == NULL) 
				return (0);
			for (unsigned int j = 0; exceptions[j]; j++)
			{
				if (exceptions[j] == s[i])
				{
					exception = true;
					break;
				}
			}

			if (!exception)
				return (0);
		}
	}
	return (1);
}
