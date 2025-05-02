#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char    *ft_strdup(char *src)
{
    char *copy;
    int i;
    int j;
    i=0;
    j=0;
    if(!src)
        return(NULL);
    while (src[i]!='\0')
        i++;
    copy=(char *)malloc(sizeof(char)*(i+1));
    i=0;
    if (!copy)
        return(NULL);
    while (src[i]!='\0')
    {
        copy[j]=src[i];
        j++;
        i++;   
    }
    copy[j]='\0';
    return(copy);
}

int main()
{
    printf("%s\n", strdup("albero"));
    printf("%s\n", ft_strdup("albero"));
    return (0);
}