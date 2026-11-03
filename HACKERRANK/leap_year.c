#include <stdio.h>
void year (int n)
{
    if(n%4==0&&(n%100!=0 || n%400==0))
    {
        printf("True\n");
    }
    else 
    {
        printf("False\n");
    }
}
int main() {
    int n;
    scanf("%d",&n);
    year(n);
    return 0;
}