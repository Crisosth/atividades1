#include<stdlib.h>
#include<stdio.h>

main()
{
    int n,num=19,fat;
    
    if(num>=0)
    {
           fat=1;
           n=num;
           while(n>0)
           {
                     fat*=n;     //FATORIAL = FATORIAL*N
                     n--;
           }
           printf("%d!=%d\n",num,fat);
    }
    return 0;
}