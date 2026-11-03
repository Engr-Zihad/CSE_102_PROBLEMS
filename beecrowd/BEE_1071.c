#include <stdio.h>

int main() {
    int a,b,sum=0;
    scanf("%d %d",&a,&b);
    int min = (a<b)?a:b;
    int max = (a<b)?b:a;
    for(int i=min;i<=max;i++)
    {
        if(i%2!=0)
        {
            sum+=i;
        }
    }
    printf("%d\n",sum);
    return 0;
}