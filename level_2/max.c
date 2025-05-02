#include <stdio.h>

int		max(int* tab, unsigned int len)
{
    int i;
    int nb;
    i = 1;
    if(!tab)
        return(0);
    nb = tab[0];    
    while (i <= len-1)
    {
        if (tab[i]>nb)
            nb=tab[i];     
        i++;
    }
    return (nb);
}

int  main()
{
    unsigned int len = 10;
    int t[len];
    t[0]=101111111;
    t[1]=10;
    t[2]=10;
    t[3]=103;
    t[4]=104;
    t[5]=10;
    t[6]=1034000;
    t[7]=1;
    t[8]=10023;
    t[9]=1001;
    printf("%d\n",max(t,len));
    return (0);
}