#include <stdio.h>
#include <stdlib.h>

int carpma(int a, int b)
{
    if(a==1)
        return b;

    else
        return b + carpma(a-1,b);
}

int main(void)
{
    int x, y;

    printf("Carpimi yapilacak sayilari giriniz: ");
    scanf("%d%d", &x, &y);

    printf("%d * %d = %d", x, y, carpma(x, y));
    return 0;
}
