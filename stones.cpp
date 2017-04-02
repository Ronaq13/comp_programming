#include<iostream>
using namespace std;

int main()
{
    int test;
    cin>>test;
    while(test)
    {
        int no_stones;

        cin>>no_stones;
        int Rsto[no_stones];
        int Asto[no_stones];
        int Rwgt[no_stones];
        int Awgt[no_stones];
        for(int i=0;i<no_stones;i++)
        {
            cin>>Rsto[i];
        }
        for(int i=0;i<no_stones;i++)
        {
            cin>>Asto[i];
        }

        // Finding maximum occuring
        // in Rupam
        int maxEleR;
        int maxEleA;
        for(int i=0;i<no_stones;i++)
        {
            int count = 0;
            int ele = Rsto[i];
            for(int i=0;i<no_stones;i++)
                {
                    if(Rsto[i]==ele)
                        {
                            count++;
                        }
                }
            Rwgt[i] = count;
        }

        int isOne = 0;
        for(int i=0;i<no_stones;i++){
            if(Rwgt[i]==1){
                isOne = 1;

                }
            else{
                isOne = 0;
                break;
            }
        }
        // for debugging
     //    for(int i=0;i<no_stones;i++){
     //       cout<<Rwgt[i]<<" ";
     //   }
     //   cout<<"\n\n";
        if(isOne == 1){
        //    cout<< "All are one";
             maxEleR = Rsto[0];
            for(int i=0;i<no_stones;i++)
            {
                if(Rsto[i]>maxEleR)
                    maxEleR = Rsto[i];
            }

        }
        else{

                int Rmax = Rwgt[0];
                int maxPosR = 0;
                for(int i=0;i<no_stones;i++)
                {
                    if(Rwgt[i]>Rmax)
                    {
                        Rmax = Rwgt[i];
                        maxPosR = i;
                    }
                }

                   maxEleR = Rsto[maxPosR];

        }






        // in Ankit
        for(int i=0;i<no_stones;i++)
        {
            int count = 0;
            int ele = Asto[i];
            for(int i=0;i<no_stones;i++)
                {
                    if(Asto[i]==ele)
                        {
                            count++;
                        }
                }
            Awgt[i] = count;
        }

            isOne = 0;
         for(int i=0;i<no_stones;i++){
            if(Awgt[i]==1)
                isOne = 1;
            else
            {
                isOne = 0;
                break;
                }
        }

  //      for(int i=0;i<no_stones;i++){
  //          cout<<Awgt[i]<<" ";
  //     }
  //      cout<<"\n\n";
        if(isOne == 1){
        //    cout<< "All are one";
            maxEleA = Asto[0];
            for(int i=0;i<no_stones;i++)
            {
                if(Asto[i]>maxEleA)
                    maxEleA = Asto[i];
            }

        }
        else{

                int Amax = Awgt[0];
                int maxPosA = 0;
                for(int i=0;i<no_stones;i++)
                {
                    if(Awgt[i]>Amax)
                    {
                        Amax = Awgt[i];
                        maxPosA = i;
                    }
                }


                maxEleA = Asto[maxPosA];

        }


     //   cout<< maxEleA <<"  " << maxEleR << "\n\n";

        if(maxEleA > maxEleR)
            cout<<"Ankit"<<"\n";
        else if(maxEleA == maxEleR)
            cout<<"Tie"<<"\n";
        else
            cout<<"Rupam"<<"\n";

        test--;

    }
    return 0;
}
