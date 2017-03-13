#include<iostream>
using namespace std;

int main(){
    int test;
    cin>>test;
    int sz, shift;
    while(test>0){
        cin>>sz>>shift;
        int a[sz];
        int tmp[shift];
        for(int i=0;i<sz;i++){
            cin>>a[i];
        }
        int overridingIndex = sz - (shift + 1);
        int copyOfOver = overridingIndex;
        for(int i=0;i<shift;i++){
            tmp[i] = a[overridingIndex + 1];
            overridingIndex++;
        }
        for(int i=copyOfOver;i>=0;i--){
            a[i+shift] = a[i];
        }
        for(int i=0;i<shift;i++){
            a[i] = tmp[i];
        }
        for(int i=0;i<sz;i++){
            cout<<a[i];
        }
        test--;
    }
    return 0;
}
