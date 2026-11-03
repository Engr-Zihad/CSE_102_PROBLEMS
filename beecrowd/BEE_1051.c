#include <stdio.h>
int main() {
    int a;
    char *month[] = {"January","February","March","April","May","June","July","August","September","October","November","December"};
    scanf("%d",&a);
    printf("%s\n",month[a-1]);
    return 0;
}