#include "libft.h"
#include <limits.h>
#include <stdbool.h>
#include <stdio.h>
int	ft_isspace(char c) {
    return (c == '\t' || c == '\n' || c == '\v' || c == '\f' || c == '\r' || c == ' ');
}

long long	convert_digits(const char *nptr, char **endptr, int sign)
{
	long	result;
	int		digit;

	(void)sign;
	result = 0;
	while (*nptr >= '0' && *nptr <= '9')
	{
		digit = *nptr - '0';
		if (result > LLONG_MAX / 10 || (result == LLONG_MAX / 10
				&& digit > LLONG_MAX % 10))
		{
			if (endptr != NULL)
				*endptr = (char *)nptr;
			return (LLONG_MAX);
		}
		result = result * 10 + digit;
		nptr++;
	}
	if (endptr != NULL)
		*endptr = (char *)nptr;
	return (result);
}

long long	ft_strtol(const char *nptr, char **endptr, int base)
{
	long long	result;
	int			sign;

	result = 0;
	sign = 1;
	(void)base;
	while (ft_isspace(*nptr))
		nptr++;
	if (*nptr == '-')
		sign = -1;
	if (*nptr == '-' || *nptr == '+')
		nptr++;
	if (*nptr >= '0' && *nptr <= '9'){
		result = convert_digits(nptr, endptr, sign);
        printf("%lld\n", result);
    }
	else if (*nptr == '9' && ft_strlen(nptr) > 18 && sign == -1)
		result = 0;
	if (result < INT_MIN)
		result = 0;
	// printf("%lld %d\n", result, sign);
	return (result * sign);
}

int	ft_atoi(const char *str)
{
	return (int)ft_strtol(str, NULL, 10);
}

int	main(void)
{
    printf("%d\n", 0*-1);
	printf("%d %d\n", ft_atoi("-9223372036854775808"), atoi("-9223372036854775808"));
	printf("%d %d\n", ft_atoi("9223372036854775808"), atoi("9223372036854775808"));
	printf("%d %d\n", ft_atoi("-2147483649"), atoi("-2147483649"));
	printf("%d %d\n", ft_atoi("123"), atoi("123"));
	return (0);
}
