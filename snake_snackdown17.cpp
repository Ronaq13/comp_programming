#include<iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n>0)
    {
        int sizeOfString;
        cin>>sizeOfString;
        char str[sizeOfString];
        int isEqualNumber = 0, numH = 0,numT = 0;
        int dontCheckFurther = 0;

        for(int i=0;i<sizeOfString;i++)
        {
            cin>>str[i];
        }


       for(int i=0;i<sizeOfString;i++)
        {
            if(str[i]=='H'){
               // cout<<str[i]<<" ";
                numH++;
            }

            if(str[i]=='T'){
                numT++;
            }
        }



        if(numH == numT){
            isEqualNumber = 1;
        }


      //  cout<<isEqualNumber;

// Now check if H comes first or not
int posH=-1,posT=-1; int isHfirst = 0;

        for(int i=0;i<sizeOfString;i++)
        {
            if(str[i]=='H'){
                  posH = i;
                break;
            }

        }

        for(int i=0;i<sizeOfString;i++)
        {
            if(str[i]=='T'){
                 posT = i;
                break;
            }

        }

       // cout<<"\n"<<posH<<" "<<posT;
        if(posH<posT) isHfirst = 1;

       // cout<<"\n"<<isHfirst;

// Now check if H and T are alternative
    if(numH==0&&numT==0){
        cout<<"Valid\n";
        dontCheckFurther = 1;
    }

if(isEqualNumber == 1 && dontCheckFurther == 0)
{


int posHA[500], posTA[500],sizeofH,sizeofT; int pos = 0;

        for(int i=0;i<sizeOfString;i++)
        {
            if(str[i]=='H'){
                posHA[pos] = i;
                pos++;
            }

        }
        sizeofH = pos;
        pos = 0;

        for(int i=0;i<sizeOfString;i++)
        {
            if(str[i]=='T'){
                posTA[pos] = i;
                pos++;
            }

        }
        sizeofT = pos;
        /*
        cout<<"\n---------------\n";
        cout<<sizeofT<<"\n";
        for(int i=0;i<sizeofT;i++)
        {
            cout<<posTA[i];

        }
        */
        int isAlternative1 = 0,isAlternative2 = 0,isAlternative = 0;

        if(sizeofH >= 2){
            for(int i=0;i<sizeofH-1;i++)
            {
                if(posTA[i]>posHA[i] && posTA[i]<posHA[i+1])
                { isAlternative1 = 1;}
                else{
                    isAlternative1 = 0;
                    break;
                }
            }
        }else{
            isAlternative1 = 1;
        }


        if(posTA[sizeofT-1]>posHA[sizeofH-1])
        { isAlternative2 = 1; }

        if(isAlternative1 && isAlternative2){
            isAlternative = 1;
        }


        //cout<<"\n-----------\n"<<isAlternative;

        if(isAlternative == 1 && isHfirst == 1){
            cout<<"Valid\n";
        }
        else
        { cout<<"Invalid\n"; }

    }


    else{
        if(dontCheckFurther == 0)
            cout<<"Invalid\n";
    }


        n--;
    }

    return 0;

}
