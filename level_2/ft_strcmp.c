#include <string.h>
#include <stdio.h>

int    ft_strcmp(char *s1, char *s2)
{
    int i;
    
    i = 0;
    while((s1[i] || s2[i]) && s1[i]==s2[i])
    {
            i++;
    }
    return(s1[i]-s2[i]);
}

int main()
{
    char *source="pappagallo";
    char *x="pappagalloz";
    printf("%d\n", strcmp(source,x));
    printf("%d\n", ft_strcmp(source,x));
    return (0);
}