#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,i,imp;
    printf("veuillez entere un nombre\nN=");
    scanf("%d",&N);
if(N%2!=0)
{

    for (i=0;i<=(N/2);i++)
    {
        imp=(2*i)+1;
        printf("%d\n",imp);
    }
}
else
    {

    for (i=0;i<(N/2);i++)
    {
        imp=(2*i)+1;
        printf("%d\n",imp);
    }
}





    return 0;
}
