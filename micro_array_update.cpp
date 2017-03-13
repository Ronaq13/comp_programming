#include<iostream>
using namespace std;

int main(){
    int a[1000000],n,k; int t;
    cin>>t;
    while(t>0){
        cin>>n;
        cin>>k;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        int tmp = a[0];
        for(int i=1;i<n;i++){
            if(a[i]<tmp){
                tmp = a[i];
            }
        }
        int count=0;
        while(tmp < k){
            tmp++;
            count++;
        }
        cout<<"\n"<<count;
        t--;
    }
    return 0;
}
