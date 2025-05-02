#include <unistd.h>
int main(int argc,char **argv)
{
    int i;
    char c;
    i=0;
    if (argc == 2)
    {
        while (argv[1][i])
        {
            if (argv[1][i]== '_')
            {
                i++;
                if (argv[1][i])
                {
                    c = argv[1][i]-32;
                    write(1,&c,1);
                    i++;
                }
                else
                    break;
                
            }
            write(1,&argv[1][i],1);         
            i++;
        }       
    } 
    write(1,"\n",1);
    return (0);
}