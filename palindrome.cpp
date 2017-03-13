#include<iostream>
#include<string>
#include<stdio.h>
#include<ctype.h>

using namespace std;

int main()
{
    int array[2000],size,product=1;
    cin>>size;

    for(int j=0;j<size;j++)
    {
        cin>>array[j];
        cout<<" ";
    }
    for(int i=0;i<size;i++)
    {
        product *=array[i];
    }
    cout<<product;
    return 0;
}
