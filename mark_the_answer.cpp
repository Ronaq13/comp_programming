#include<iostream>
using namespace std;

int main(){
    long size,diff;
    cin>>size;
    cin>>diff;
    long a[size];
    for(int i=0;i<size;i++){
        cin>>a[i];
    }
    int stop = 0;
    int score = 0;
    for(int i=0;i<size;i++){
        if(stop > 1)
            break;
        if(a[i]>diff){
            stop += 1;
        }
        if(a[i]<=diff){
            score++;
        }
    }
    cout<<score;

    return 0;
}
