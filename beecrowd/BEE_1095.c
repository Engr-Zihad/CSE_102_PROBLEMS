#include <stdio.h>

int main() {
    for(int i=1,j=60;j>=0;i+=3,j-=5)
    {
        printf("i=%d j=%d\n",i,j);
    }
    return 0;
}