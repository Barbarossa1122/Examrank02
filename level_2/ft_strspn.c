#include <stdio.h>
#include <string.h>

size_t	ft_strspn(const char *s, const char *accept)
{
    size_t  i;
    size_t  a;
    int j;
    j=0;
    i=0;
    while (s[i]!='\0')
    {
        a=0;
        j=0;
        while (accept[a]!='\0')
        {
            if(s[i]==accept[a])
                j++;
            a++;
        }
        if (!j)
            return(i);
        i++;
    }
    return(i);
}
int main()
{
    printf("%zu\n",strspn("1234 56789","12345"));
    printf("%zu\n",ft_strspn("1234 56789","12345"));
    return (0);
}