unsigned int    lcm(unsigned int a, unsigned int b)
{
    unsigned int d;
    if(a>b)
        d = b;
    else
        d = a;
    if (a==0 || b == 0)
        return(0);
    while (d)
    {
        if((a % d == 0) && (b % d == 0))
            return(a / d * b);
        d--;
    }
    return(0);
}

#include <stdlib.h>
#include <stdio.h>

int main(int ac, char **av)
{
 	if (ac == 3)
 	{
 		unsigned int m = lcm(atoi(av[1]), atoi(av[2]));
 		printf("LCM: %u\n", m);
 	}
}