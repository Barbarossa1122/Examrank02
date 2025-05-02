#include <stdio.h>
int	    is_power_of_2(unsigned int n)
{
    int nb;
    nb=1;
    while (nb <= n)
    {
        if (nb == n)
            return(1);
        nb *=2;        
    }
    return(0);
}
int main()
{
    printf("%d\n", is_power_of_2(128));
    return (0);
}