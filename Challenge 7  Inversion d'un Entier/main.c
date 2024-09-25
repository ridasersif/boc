#include <stdio.h>
int main()
{
    int N,inverse;
    printf("veuillez enter un nombre :\nN=");
    scanf("%d",&N);
    inverse=0;
    do
    {
        inverse=(inverse*10)+(N%10);
        N=N/10;

    }while(N!=0);
    printf("L'inverse est %d",inverse);

}


