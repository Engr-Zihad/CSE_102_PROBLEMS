#include <stdio.h>

int main() {
    int n,sum=0;
    scanf("%d",&n);
    for(int i =n;n>0;n/=10)
    {
        int rev = n%10;
        sum+=rev;
    }
    printf("%d\n",sum);
    return 0;
}