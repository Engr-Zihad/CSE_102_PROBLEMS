#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    int min = (a<b)?a:b;
    int max = (a<b)?b:a;
    for(int i=min+1;i<max;i++)
    {
        if(i%5==2||i%5==3)
        {
         printf("%d\n",i);
        }
    }
    
    return 0;
}