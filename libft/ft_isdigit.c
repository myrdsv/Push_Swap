
#include "libft.h"

bool	ft_isdigit(int ch)
{
	if (ch > 47 && ch < 58)
	{
		return (true);
	}
	return (false);
}
