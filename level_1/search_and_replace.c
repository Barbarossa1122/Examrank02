#include <unistd.h>

int	ft_strlen(char *str)
{
    int i;
    i = 0;
    while(str[i] != '\0')
        i++;
    return(i);
}

int main(int argc,char **argv)
{
    int i;
    i=0;
    if (argc == 4)
    {
        while (argv[1][i] !='\0' && ft_strlen(argv[2]) == 1 && ft_strlen(argv[3]) == 1)
        {
            if (((argv[2][0]>='a' && argv[2][0]<='z') || (argv[2][0]>='A' && argv[2][0]<='Z')) && ((argv[3][0]>='a' && argv[3][0]<='z') || (argv[3][0]>='A' && argv[3][0]<='Z')))
            {
                if (argv[1][i] == argv[2][0])
                {
                    argv[1][i] =argv[3][0];
                }
                write(1,&argv[1][i],1);
            }
            i++;  
        }   
    }
    write(1,"\n",1);
    return (0);
}