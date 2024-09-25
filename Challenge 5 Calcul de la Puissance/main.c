#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int i,base,exp,R;
    i=1;
    do
    {
    printf("veuillez entere la base\nbase=");
    scanf("%d",&base);
    printf("veuillez entere le exp\nexp=");
    scanf("%d",&exp);
    R=pow(base,exp);
    printf("le resultat de %d^%d=%d\n",base,exp,R);

    i++;
    }while(base>0);

    return 0;
}
