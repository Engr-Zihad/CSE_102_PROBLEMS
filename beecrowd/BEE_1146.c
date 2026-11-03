#include <stdio.h>

int main() {
    int n;
    for(int i=0; ; i++)
    {
        scanf("%d",&n);
        if(n==0)
        {
            break;
        }
        for(int j=1;j<=n;j++)
        {
            if(j>1)
            {
                printf(" ");
            }
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}