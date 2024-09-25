#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,i,S;
    printf("veuillez entere un nombre\nN=");
    scanf("%d",&N);
      S=0;
    for(i=1;i<=N;i++)

    {
        S=S+i;
    }
    printf("S=%d",S);
    return 0;
}
