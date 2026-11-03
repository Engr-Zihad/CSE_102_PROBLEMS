#include <stdio.h>

int main() {
    int N,x,y;
    scanf("%d",&N);
    for(int i =1; i<=N;i++)
    {
        int sum=0;
        scanf("%d %d",&x,&y);
        int min = (x<y)?x:y;
        int max = (x<y)?y:x;
        for(int j = min+1; j<max;j++)
        {
            if(j%2!=0)
            {
                sum+=j;
            }
        }
        printf("%d\n",sum);
    }
    return 0;
}