#include <stdio.h>

int main() {
    int x,y;
    for(int i =1; ;i++)
    {
        int sum=0;
        scanf("%d %d",&x,&y);
        int min = (x<y)?x:y;
        int max = (x<y)?y:x;
        if(x<=0 || y<=0) 
        {
            break;
        }
        for(int j = min; j<=max;j++)
        {
           printf("%d ",j);
           sum+=j;
        }
        printf("Sum=%d\n",sum);
    }
    return 0;
}