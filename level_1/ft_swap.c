#include <stdio.h>

void	ft_swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b=temp;
}
int main()
{
    int a = 20;
    int b = 50;
    int *x;
    int *y;
    x=&a;
    y=&b;
    ft_swap(x,y);
    printf("%d\n",*x);
    printf("%d\n",*y);
    return (0);
}