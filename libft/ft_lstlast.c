
#include "libft.h"

t_struct	*ft_lstlast(t_struct *lst)
{
	if (!lst)
		return (0);
	while (lst->next)
	{
		lst = lst->next;
	}
	return (lst);
}
