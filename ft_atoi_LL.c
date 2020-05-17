#include "push_swap.h"

long long  ft_atoi_LL(char const *s)
{
	long long neg;
	long long num;
	int i;

	i = 0;
	neg = 1;
	num = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t' ||
			s[i] == '\r' || s[i] == '\v' || s[i] == '\f')
		i++;
	if (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
			neg *= -1;
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		if (neg == -1)
			num = num * 10 - (s[i] - 48);
		else
			num = num * 10 + (s[i] - 48);
		i++;
	}
	return (num);
}