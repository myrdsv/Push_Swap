
#include "../header.h"

void	ft_sort_five(t_struct **stackA, t_struct **stackB)
{
	int	flag;

	flag = 0;
	ft_push_small_a(stackA, stackB, flag);
	flag = 1;
	ft_push_small_a(stackA, stackB, flag);
	ft_sort_three(stackA);
	ft_push_a(stackA, stackB);
	ft_push_a(stackA, stackB);
}
