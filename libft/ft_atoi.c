#include "../inc/push_swap.h"

static int	number(long x, int sign, int *flag)
{
	*flag = 0;
	if (sign < 0 && x <= 2147483648)
		return (sign * x);
	if (sign > 0 && x <= 2147483647)
		return (sign * x);
	*flag = 1;
	return (0);
}

int	ft_atoi(const char *s, int *flag)
{
	int			sign;
	long long	x;

	x = 0;
	sign = 1;
	while ((*s > 8 && *s < 14) || *s == 32)
		s++;
	if (*s == '-' || *s == '+')
	{
		if (*s == '-')
			sign = -sign;
		s++;
	}
	while (*s)
	{
		if (*s >= '0' && *s <= '9')
		{
			x = x * 10 + *s - '0';
			s++;
		}
		else
			return (number(x, sign, flag));
	}
	return (number(x, sign, flag));
}
