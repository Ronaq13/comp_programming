#include <stdio.h>

int main()
{
    int sz,q;
    scanf("%d%d",&sz,&q);
    int a[sz]; int i;
    for(i=0; i<sz;i++){
        scanf("%d",&a[i]);
    }
    int query,L,R,x;
    while(q>0){
        scanf("%d",&query);
        if(query == 1){
            scanf("%d",&x);
            if(a[x] == 0)
                a[x] = 1;
            else
                a[x] = 0;
        }
        else if(query == 0){
            scanf("%d%d",&L,&R);
            int count = 0;
            for(i =L;i<=R;i++){
                if(a[i] == 1){
                    count++;
                }
            }
            if(count%2==0){
                printf("EVEN");
            }
            else
                printf("ODD");
        }
        q--;
    }
    return 0;
}
