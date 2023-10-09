
#include "libft.h"

void	ft_lstadd_back(t_struct **lst, t_struct *new)
{
	if (!*lst)
	{
		*lst = new;
	}
	else
	{
		ft_lstlast(*lst)->next = new;
	}
}
