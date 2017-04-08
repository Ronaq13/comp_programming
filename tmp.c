#include <stdio.h>
int main()
{
    int size;
    scanf("%d",&size);
    int A[size];
    int i,j;
    for(i=0;i<size;i++)
    {
        scanf("%d",&A[i]);
    }
    for(i=0;i<size;i++)
    {
        int x = -1;
        int y = -1;
       for(j=0;j<i;j++)
       {
            if(A[i]<A[j] && (j+1)>x){
                x = j+1;
            }
       }
        int tmp = 5;
       for(j=(size-1);j>i;j--)
       {
            if(A[i]<A[j] && j<tmp){
              tmp = j;
              y = j+1;
            }

       }
      printf("%d ",x+y);
    }
    return 0;
}
