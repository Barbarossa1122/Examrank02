#include <unistd.h>

int main(int ac, char **av)
{
    int i;
    int j;
    j=1;
    i=0;
    if (ac >=2)
    {
        while(j<=ac-1)
        {
            i=0;
            while (av[j][i]!='\0')
            {
                if (av[j][i] >= 'A' && av[j][i]<='Z')
                    av[j][i] += 32;
                i++;
            }
            i=0;
            while (av[j][i]!='\0')
            {
                if ((av[j][i] >= 'a' && av[j][i]<='z') && (av[j][i+1] == ' ' || av[j][i+1]=='\t' || av[j][i+1]=='\0'))
                     av[j][i] -= 32;
                i++;
            }
            i=0;
            while (av[j][i]!='\0')
            {
                write(1,&av[j][i],1);
                i++; 
            }
            j++;
            if(j<=ac - 1)
                write(1,"\n",1);
        }
    }
    write(1,"\n",1);
    return(0);
}