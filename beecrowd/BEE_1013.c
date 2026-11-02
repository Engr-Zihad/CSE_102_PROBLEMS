#include <stdio.h>
#include <stdlib.h>
int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int majorAB = ((a+b)+abs(a-b))/2;
    int major = ((majorAB+c)+abs(majorAB-c))/2;
    printf("%d eh o maior\n",major);
    return 0;
}