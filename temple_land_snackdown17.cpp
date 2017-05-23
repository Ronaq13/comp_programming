#include<iostream>
using namespace std;

int main()
{
    int s;
    cin>>s;
    while(s>0)
    {
        int sizeofstrip;
        cin>>sizeofstrip;
        int str[sizeofstrip];
        int hasOneAtEnds = 0, hasCenter = 0;
        int islinearinc = 0;
        int islineardec = 0;

        for(int i=0;i<sizeofstrip;i++)
        {
            cin>>str[i];
        }

        if(str[0]==1 && str[sizeofstrip-1]==1)
        {
            hasOneAtEnds = 1;
        }

        if(sizeofstrip%2 != 0){
            hasCenter = 1;
        }

        if(hasCenter == 1)
        {
            int center = (sizeofstrip-1)/2;

            for(int i=0;i<=center;i++)
            {
                if(str[i] == (i+1)) islinearinc = 1;
                else{
                    islinearinc = 0;
                    break;
                }
            }

            for(int i=center+1;i<sizeofstrip;i++)
            {
                    if(str[i] == str[i-1]-1) islineardec = 1;
                    else{
                        islineardec = 0;
                        break;
                    }
            }

            if(islineardec==1&&islinearinc==1&&hasOneAtEnds==1)
                cout<<"yes\n";
            else
                cout<<"no\n";

        }
        else{
            cout<<"no\n";
        }



        s--;
    }
    return 0;
}
