#include <stdio.h>
#include <stdlib.h>
int is_prime(int nb)
{
    int i;
    i=2;
    if(nb < 2)
        return (0);
    while(i<=nb/2)
    {
        if (nb % i==0)
            return (0);
        i++;
    }
    return(1);
}

int main(int ac, char **av)
{
    int i;
    int nb;
    i=2;
    if (ac == 2)
    {
        nb=atoi(av[1]);
        if (nb == 1)
        {
            printf("1\n");
            return(0);
        }
        
        while (i<=nb)
        {
            if (nb % i == 0 && is_prime(i))
            {
                printf("%d",i);
                if (nb != i)
                    printf("*");
                nb /= i;
                i=2;
            }
            i++;
        }
        
    }
    printf("\n");
    return(0);
}