#include<iostream>
using namespace std;

int main(){
    int n,a[100000];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int count=0;
    for(int i=0;i<n;i++){
        if(a[i+1]<a[i]){
            count++;
        }
    }
    cout<<count;
    return 0;
}
