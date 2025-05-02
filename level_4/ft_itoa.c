#include <stdlib.h>

char	*ft_itoa(int nbr)
{
    char *str;
    int i=0;
    long nb = nbr;
    if(nbr <= 0)
        i++;
    while (nbr)
    {
        nbr /= 10;
        i++;
    }
    str = (char *)malloc(sizeof(char)*(i+1));
    if (!str)
        return(NULL);
    str[i]='\0';
    i--;
    if (nb == 0)
    {
        str[0]= '0';
        return (str);
    }
    
    if(nb < 0)
    {
        str[0] = '-';
        nb *= -1;
    } 
    while (nb && i >= 0)
    {
        str[i] = nb % 10 + '0';
        nb/=10;
        i--;
    }
    return(str);  
}

#include <stdio.h>
int main()
{
    printf("%s\n",ft_itoa(0));
}