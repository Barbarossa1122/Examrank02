#include <stdio.h>
#include <string.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
    size_t  i;
    size_t  r;
    r=0;
    i=0;
    while (s[i] != '\0')
    {
        while (reject[r]!='\0')
        {
            if (s[i]==reject[r])
                return(i);
            r++;
        }
        r=0;
        i++;
    }
    return(i);
}

int main()
{
    printf("%zu\n", strcspn("@aonjcsn","@"));
    printf("%zu\n", ft_strcspn("@aonjcsn","@"));
    return (0);
}