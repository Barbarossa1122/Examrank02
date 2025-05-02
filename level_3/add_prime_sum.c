#include <unistd.h>

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
    char    c;
	if (n == -2147483648)
	{
		write(1,"-2",2);
		ft_putnbr(147483648);
		return;
	}
	if (n < 0)
	{
		write(1,"-",1);
		n = -n;
	}
	if (n >= 10)
	{
		ft_putnbr(n / 10);
	}
    c = (n % 10) + '0';
	write(1,&c,1);
}

int	ft_atoi(const char *str)
{
    int i;
    int s;
    int nb;

    s = 1;
    i = 0;
    nb = 0;
    while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
        i++;
    if (str[i] == '-')
    {
        s = -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        nb *= 10;
        nb += str[i] - 48;
        i++;
    }
    return(nb *= s);    
}

int is_prime(int nb)
{
    int i;
    i=2;
    if(nb<2)
        return(0);
    while (i<= nb/2)
    {
        if (nb % i == 0)
            return 0;
        i++;
    }
    return(1);
}

int main(int ac,char **av)
{
    int n;
    int sum;
    if(ac != 2 || ft_atoi(av[1])<=0)
    {
        write(1,"0\n",2);
        return(0);
    }
    n=ft_atoi(av[1]);
    sum = 0;
    while (n > 1)
    {
        if (is_prime(n))
            sum += n;
        n--;
    }
    ft_putnbr(sum);
    write(1,"\n",1);
    return (0);
}