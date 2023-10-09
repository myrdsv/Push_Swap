
#include "libft.h"

void	ft_lstadd_front(t_struct **lst, t_struct *new)
{
	if (!new)
		return ;
	new->next = *lst;
	*lst = new;
}
