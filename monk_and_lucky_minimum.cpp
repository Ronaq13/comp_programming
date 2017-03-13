
#include <iostream>
using namespace std;

int main()
{
    int test;
    int n;
    int count;
    int a[100000];
    cin>>test;
    while(test>0){
        count = 0;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int tmp = a[0];

        for(int i=0;i<n;i++){
            if(a[i]<tmp){
                tmp = a[i];
            }
        }

        for(int i=0;i<n;i++){
            if(tmp == a[i])
                count++;
        }
        if(count%2==0){
            cout<<"Lucky";
        }
        else
            cout<<"Unlucky";


        test--;
    }
    return 0;
}
