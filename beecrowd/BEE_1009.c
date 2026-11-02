#include <stdio.h>

int main() {
    char name[100];
    double b,c;
    scanf("%s %lf %lf", &name, &b, &c);
    printf("TOTAL = R$ %.2lf\n",b+(c*.15));
    return 0;
}