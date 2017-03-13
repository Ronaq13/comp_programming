#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    int sz,q;

    cin>>sz>>q;
    int a[sz];
    for(int i=0; i<sz;i++){
        cin>>a[i];
    }
    int query,L,R,x;
    while(q>0){
        cin>>query;
        if(query == 1){
            cin>>x;
            if(a[x] == 0)
                a[x] = 1;
            else
                a[x] = 0;
        }
        else if(query == 0){
            cin>>L>>R;
            int count = 0;
            for(int i =L;i<=R;i++){
                if(a[i] == 1){
                    count++;
                }
            }
            if(count%2==0){
                cout<<"EVEN";
            }
            else
                cout<<"ODD";
        }
        q--;
    }

    return 0;
}
