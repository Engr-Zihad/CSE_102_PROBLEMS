#include <stdio.h>

int main() {
    int n,count=0;
    scanf("%d",&n);
    if(n<=1)
    {
        printf("NO\n");
        return 0;
    }
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            count++;
            break;
        }
    }
    if(count==0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}