#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    while(n>0)
    {
        int rev = n%10;
        n/=10;
        printf("%d",rev);
    }
    return 0;
}