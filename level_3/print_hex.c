#include <unistd.h>

unsigned int ft_atoi(char *str)
{
    int nb;
    int i;
    nb = 0;
    i=0;
    while (str[i] >= '0' && str[i]<='9')
    {
        nb *= 10;
        nb += str[i] - '0';
        i++;
    }
    return(nb);
}
 void print_hex(int nb)
 {
    char *base;
    char c;
    base = "0123456789abcdef";
    if (nb >= 16)
        print_hex(nb / 16);
    c = base[nb % 16];
    write(1,&c,1);
 }

int main(int ac, char **av)
{
    if (ac == 2)
        print_hex(ft_atoi(av[1]));
    write(1,"\n",1);
    return(0);
}