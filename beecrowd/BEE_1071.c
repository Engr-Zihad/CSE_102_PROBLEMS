#include <stdio.h>

int main() {
    int x,y,sum=0;
    scanf("%d %d",&x,&y);
    int min = (x<y)?x:y;
    int max = (x<y)?y:x;
    for(int i=min+1;i<max;i++)
    {
        if(i%2!=0)
        {
            sum+=i;
        }
    }
    printf("%d\n",sum);
    return 0;
}