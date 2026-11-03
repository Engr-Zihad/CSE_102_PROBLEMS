#include <stdio.h>

int main() {
    int a;
    for(int i=0; ;i++)
    {
        scanf("%d",&a);
        if(a==2002)
        {
            printf("Acesso Permitido\n");
            break;
        }
        else
        {
            printf("Senha Invalida\n");
        }
    }
    return 0;
}