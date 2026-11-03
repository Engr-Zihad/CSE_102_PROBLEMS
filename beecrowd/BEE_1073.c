#include <stdio.h>

int main() {
    int N;
    scanf("%d",&N);
    for(int i=2;i<=N;i+=2)
    {
        if(i%2==0)
        {
            printf("%d^2 = %d\n",i,i*i);
        }
    }
    return 0;
}