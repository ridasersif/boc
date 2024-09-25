#include <stdio.h>
#include <stdlib.h>

int main()
{
      float i,f;
      int N;
    printf("veuillez entere un nombere\nN=");
    scanf("%d",&N);
    f=1;
    for(i=2;i<=N;i++)
    {
        f=f*i;
        printf("la factorielle de %d est : %.2f",N,f);
    }
    return 0;
}
