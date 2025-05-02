#include <stdlib.h>
#include <stdio.h>
int main (int ac, char **av)
{
    unsigned int gcd;
    unsigned int a;
    unsigned int b;
    if (ac == 3)
    {
        a =atoi(av[1]);
        b= atoi(av[2]);
        if (a > b)
            gcd = b;
        else
            gcd = a;
        while(gcd)
        {
            if (a % gcd == 0 && b % gcd == 0)
                break;
            gcd--;
        }
        printf("%u", gcd);
    }
    printf("\n");
    return (0);
}