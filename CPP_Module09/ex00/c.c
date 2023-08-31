#include <unistd.h>
int main(int argc,char **argv)
{
    int a = 1;
    if(argc > 1)
    {
        while(argv[a])
        {
            int i = 0;
            while(argv[a][i])
            {
                write(1,&argv[a][i],1);
                i++;
            }
            write(1,"\n",1);
            a++;
        }
    }
}