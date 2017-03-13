#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=0;i<n;i++){
        if(a[i]==0){
            if(i!=0){
                a[i-1] = 0;
            }
        }
    }
    int sum = 0;
    for(int i=0;i<n;i++){
        sum+=a[i];
    }

    for(int i=0;i<n;i++){
        cout<<a[i];
    }

    cout<<sum;

    return 0;
}
