#include <unistd.h>
void    ft_putnbr(int n)
{
    char c;
    if (n== -2147483648)
    {
        write(1,"-2147483648",11);
        return ;
    }
    if (n<0)
    {
        write(1,"-",1);
        n *= -1;
    }
    if (n>=10)
        ft_putnbr(n/10);
    c = n % 10 +'0';
    write(1,&c,1);
}

int ft_atoi(const char *str)
{
    int i;
    int sign;
    int res;
    i=0;
    res = 0;
    sign = 1;
    while((str[i] >= 9 && str[i]<=13) || str[i]==32)
        i++;
    if (str[i]=='+')
        i++;
    else if (str[i] == '-')
    {
        sign*= -1;
        i++;
    }
    while (str[i]>= '0' && str[i] <= '9')
    {
        res *=10;
        res += str[i] - '0';
        i++;
    }
    return(res * sign);    
}
int main(int ac, char **av)
{
    int m;
    m=1;
    if (ac ==2)
    {
        while (m<=9)
        {
            ft_putnbr(m);
            write(1," x ",3);
            ft_putnbr(ft_atoi(av[1]));
            write(1," = ",3);
            ft_putnbr(ft_atoi(av[1]) * m);
            if (m <=8)
                write(1,"\n",1);
            m++;
        }
    }
    write(1,"\n",1);
    return (0);
}