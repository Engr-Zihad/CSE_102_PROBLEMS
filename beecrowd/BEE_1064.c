#include <stdio.h>

int main() {
    int count=0,sum=0;
    for(int i =0; i<6;i++)
    {
        double a;
        scanf("%lf",&a);
        if(a>0)
        {
            sum+=a;
            count++;
        }
    }
    printf("%d valores positivos\n%.1lf\n",count,(double)sum/count);
    return 0;
}