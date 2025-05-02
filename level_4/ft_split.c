#include <stdlib.h>

int count_words(char *str)
{
    int i;
    int count;
    i=0;
    count=0;
    while (str[i] != '\0')
    {

        while (str[i] == '\n' || str[i]=='\t' || str[i]== ' ') 
            i++;
        if(str[i] != '\0')
            count++;
        while(!(str[i] == '\n' || str[i]=='\t' || str[i]== 32 || str[i] == '\0'))
            i++;
    }
    return(count);
}

char **ft_split(char *str)
{
    char **output;
    int i=0;
    int y;
    int j=0;
    int z=0;
    int x=0;
    y=count_words(str);
    output = (char **)malloc(sizeof(char *) * (y + 1));
    if(!output)
        return (NULL);
    output[y] = NULL;
    while (j < y)
    {
        while (str[i] == '\n' || str[i]=='\t' || str[i]== ' ') 
        {    
            i++;
            z++;
        }
        while(str[i] != '\n' && str[i]!='\t' && str[i]!= 32 && str[i] != '\0')
            i++;
        output[j]=(char *)malloc(sizeof(char)*(i-z+1));
        if (!output[j])
            return (NULL);
        while(z < i)
        {
            output[j][x] = str[z];
            z++;
            x++;
        }
        output[j][x] ='\0';
        x=0;
        j++;
    }
    return(output);
}



#include <stdio.h>

char **ft_split(char *str);

int main(void)
{
    char *input = "unica";
    char **words = ft_split(input);
    int i = 0;

    while (words && words[i])
    {
        printf("word[%d]: %s\n", i, words[i]);
        i++;
    }
    return 0;
}
