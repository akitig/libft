#include "libft.h"

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int	test_isalpha(int i)
{
	int	own_i;
	int	lib_i;
	int	own;
	int	lib;
    bool WC_flg;

    WC_flg = false;

	// int isalpha(int c)
	own_i = i;
	lib_i = i;
	own = ft_isalpha(own_i);
	lib = isalpha(lib_i);
	if (own != lib)
	{
		printf("i=%d, own=%d, lib=%d\n", i, own, lib);
		WC_flg = true;
	}
	return (WC_flg);
}



int test_isalnum(int i)
{
	int	own_i;
	int	lib_i;
	int	own;
	int	lib;
    bool WC_flg;

    WC_flg = false;

	// int isalnum(int c)
	own_i = i;
	lib_i = i;
	own = ft_isalnum(own_i);
	lib = isalnum(lib_i);
	if (own != lib)
	{
		printf("i=%d, own=%d, lib=%d\n", i, own, lib);
		WC_flg = true;
	}
    return (WC_flg);
}


int get_rand(int min, int max)
{
    return min + (int)(rand() * (max - min + 1.0) / (1.0 + RAND_MAX));
}

void print_AC(int WC, char *func)
{
    if (!WC)
        printf("%s : AC\n", func);
    else
        printf("%s : WC\n", func);
}


void	test_is(void)
{
	long long int		i;
	bool	WC_ISALPHA;
    bool    WC_ISALNUM;

	i = INT_MIN;
    WC_ISALPHA = false;
    WC_ISALNUM = false;

    srand((unsigned int)time(NULL));
	while (i < INT_MAX)
	{
        WC_ISALPHA = test_isalpha(i);
        WC_ISALNUM = test_isalnum(i);
        i += get_rand(1,100);
    }
    print_AC(WC_ISALPHA, "isalpla");
    print_AC(WC_ISALNUM, "isalnum");
}

int	main(void)
{
    test_is();
    return (0);
}
