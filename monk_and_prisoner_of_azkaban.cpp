#include<iostream>
using namespace std;

int main(){
    int size;
    cin>>size;
    int A[size];

    for(int i=0;i<size;i++)
    {
        cin>>A[i];
    }
    for(int i=0;i<size;i++)
    {
        int x = -1;
        int y = -1;
       for(int j=0;j<i;j++)
       {
            if(A[i]<A[j] && (j+1)>x){
                x = j+1;
             //   cout<<x;
            }
       }
        int tmp = size;
       for(int j=(size-1);j>i;j--)
       {
           // cout<<"j:"<<j<<" "<<tmp;
          // cout<<A[i];
         //  cout<<" "<<j<<"\n";
            if(A[i]<A[j] && j<tmp){
               // y = j;
              //  cout<<y;
              tmp = j;
              y = j+1;
            //  cout<<"Y is :"<<y<<" ";
            }

       }
      // cout<<" x:"<<x;
      // cout<<" y:"<<y<<"\n";
      cout<<x+y<<" ";
    }
    return 0;
}
