#include <stdio.h>

int	ft_strlen(char *str)
{
    int i;
    i = 0;
    while(str[i] != '\0')
        i++;
    return(i);
}

int main()
{
    int len;
    char *sr;
    sr= "01234567890123456789";
    len = ft_strlen(sr);
    printf("%d\n",len);
    return (0);
}