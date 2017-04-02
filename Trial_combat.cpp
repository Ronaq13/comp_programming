#include<iostream>
using namespace std;

int main()
{
    int test;
    cin>>test;
    while(test)
    {
        int hours;
        int no_ele;
        cin>>no_ele;
        cin>>hours;
        int ele[no_ele];
        for(int i=0; i<no_ele; i++)
            {
                cin>>ele[i];
            }
        while(hours)
        {
            int tmp[no_ele];

            if(ele[1] == 0) tmp[0] = 0;
            else tmp[0] = 1;

            if(ele[no_ele-2] == 0) tmp[no_ele-1] = 0;
            else tmp[no_ele-1] = 1;

            for(int i=1;i<(no_ele-1);i++)
            {
                if(ele[i-1] == 1 && ele[i+1] == 1)
                    tmp[i] = 1;
                else    tmp[i] = 0;
            }

            // copy
            for(int i=0;i<no_ele;i++){
                ele[i] = tmp [i];
            }
            hours--;
        }
        for(int i=0;i<no_ele;i++){
                cout<<ele[i]<<" ";
            }
        test--;
    }

    return 0;
}
