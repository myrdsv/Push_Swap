
#include "libft.h"

t_struct	*ft_lstnew(int value)
{
	t_struct	*cntn;

	cntn = (t_struct *)malloc(sizeof(t_struct));
	if (!cntn)
		return (NULL);
	cntn->value = value;
	cntn->index = -1;
	cntn->next = NULL;
	return (cntn);
}
