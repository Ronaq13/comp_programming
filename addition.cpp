#include <iostream>
using namespace std;

int main()
{
    int A[100000], B[100000],i;
    double N;
    //int C[100000];
    cin>>N;
    for(i=0;i<N;i++)
      cin>>A[i];
    for(i=0;i<N;i++)
      cin>>B[i];
    for(i=0;i<N;i++)
    	cout<<A[i]+B[i];

    return 0;
}
