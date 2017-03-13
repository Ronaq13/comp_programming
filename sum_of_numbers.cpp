#include<iostream>
#include<math.h>
using namespace std;
int isPerfectNumber(double);
int main()
{
    int N;
    cin>>N;
    for(int i =0;i<pow(N,0.5);i++)
    {
        if(isPerfectNumber(N-(i*i)))
    }
    return 0;
}

int isPerfectNumber(double x){
    double result = sqrt(x);

    if(result == (int)result) return true;
    else return false;
}
