
#include "../header.h"

void	ft_push_a(t_struct **stackA, t_struct **stackB)
{
	t_struct	*head;

	if (*stackB)
	{
		head = (*stackB)->next;
		(*stackB)->next = *stackA;
		*stackA = *stackB;
		*stackB = head;
		write(1, "pa\n", 3);
	}
}

void	ft_push_b(t_struct **stackA, t_struct **stackB)
{
	t_struct	*head;

	if (*stackA)
	{
		head = (*stackA)->next;
		(*stackA)->next = *stackB;
		*stackB = *stackA;
		*stackA = head;
		write(1, "pb\n", 3);
	}
}
