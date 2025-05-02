#include <string.h>
#include <stdio.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
    int i;
    int j;
    i=0;
    while(s1[i]!='\0')
    {
        j=0;
        while (s2[j]!='\0')
        {
            if(s1[i]==s2[j])
                return((char *)&s1[i]);
            j++;
        }
        i++;
    }
    return(NULL);
}

int main()
{
    printf("%p\n",strpbrk("abcdefghi","h"));
    printf("%p\n",ft_strpbrk("abcdefghi","h"));
    return (0);
}