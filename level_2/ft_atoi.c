#include <stdlib.h>
#include <stdio.h>

int	ft_atoi(const char *str)
{
    int i;
    int s;
    int nb;

    s = 1;
    i = 0;
    nb = 0;
    while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
        i++;
    if (str[i] == '-')
    {
        s = -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        nb *= 10;
        nb += str[i] - 48;
        i++;
    }
    return(nb *= s);    
}

int main()
{
    const char *s ="---123";
    printf("%d\n",atoi(s));
    printf("%d\n",ft_atoi(s));
    return (0);
}