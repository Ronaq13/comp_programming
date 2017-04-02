#include<iostream>
using namespace std;

int main()
{
    int test;
    cin>>test;
    int no_cars;
    while (test){
        int count = 1;
        cin>>no_cars;
        int max_speed[no_cars];
        for(int i=0;i<no_cars;i++){
            cin>>max_speed[i];
        }
        for(int i=1;i<no_cars;i++){
            if(max_speed[i]<max_speed[i-1])
                count++;
        }

        cout<<count<<"\n";


        test--;
    }
    return 0;
}
