#include <stdio.h>

int main() {
    int a,b;
    for(int i=0; ;i++)
    {
        scanf("%d %d",&a,&b);
        if(a==b)
        {
            break;
        }
        else if(a<b)
        {
            printf("Crescente\n");
        }
        else if(a>b)
        {
            printf("Decrescente\n");
        }
    }
    return 0;
}