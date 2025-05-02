#include <stdlib.h>

int     *ft_range(int start, int end)
{
    int i;
    int len;
    int *range;
    i=0;
    if (end >= start)
        len = (end - start) + 1;
    else
        len = (start - end) + 1;
    range = (int *)malloc(sizeof(int)*len);
    if(!range)
        return(NULL);
    while (i<len)
    {
        if(start> end)
        {
            range[i]=start - i;
        }
        else
        {
            range[i]=start + i;
        }
        i++;
    }
    return(range);    
}

#include <stdio.h>

int main(void)
{
    int *arr;
    int i = 0;
    int start = -3;
    int end = 7;
    int len = (start > end) ? (start - end + 1) : (end - start + 1);

    arr = ft_range(start, end);
    if (!arr)
        return 1;

    while (i < len)
    {
        printf("%d ", arr[i]);
        i++;
    }
    printf("\n");

    free(arr);
    return 0;
}