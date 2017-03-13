#include<iostream>
using namespace std;

int main(){
    int a[100000];
    int q;
    int n;
    int top = -1;
    cin>>q;

    while(q>0){
       cin>>n;
        if(n == 1){
            if(top == -1){
                cout<<"No Food\n";
            }
            else{
            cout<<a[top]<<"\n";
            top = top - 1;
            }
        }
        else if(n == 2){
                top += 1;
                int tmp;
                cin>>tmp;
                a[top] = tmp;
        }
        q--;
    }
    return 0;
}
