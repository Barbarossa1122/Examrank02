#include <stdlib.h>

int     *ft_rrange(int start, int end)
{
    int i;
    int len;
    int *result;
    if(start>end)
        len = start - end + 1;
    else
        len = end - start + 1;
    result = (int *)malloc(sizeof(int) * len);
    if(!result)
        return(NULL);
    i=0;
    while (i<len)
    {
        if (end > start)
            result[i]= end-i;
        else
            result[i] = end + i;
        i++;
    }
    return(result);
}

#include <stdio.h>

int main(void)
{
    int *arr;
    int i = 0;
    int start = -3;
    int end = 7;
    int len = (start > end) ? (start - end + 1) : (end - start + 1);

    arr = ft_rrange(start, end);
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
