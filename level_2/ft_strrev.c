#include <stdio.h>

char    *ft_strrev(char *str)
{
    char temp;
    int i;
    int j;
    i=0;
    j=0;
    while(str[i]!='\0')
        i++;
    i--;
    while (j < i)
    {
        temp = str[j];
        str[j]= str[i];
        str[i]= temp;
        i--;
        j++;
    }
    return(str);
}
/*
int main()
{
    printf("%s\n",ft_strrev("Serena Vanni"));
}
*/
int main()
{
    char parola[] = "esempio";
    printf("Prima: %s\n", parola);
    ft_strrev(parola);
    printf("Dopo : %s\n", parola);
    return 0;
}

