#include<iostream>
using namespace std;

int main()
{
    struct fri{
        int popu;
        struct fri *link;
    };

    fri* nextFri = new fri;
    fri* previousFri = new fri;
    fri* prePtr = new fri;
    fri* ptr = new fri;
    fri* header = new fri;



    int test;
    cin>>test;
    while(test)
    {
          header->popu = NULL;
         header->link = NULL;

        int no_fri;
        int del_num;
        cin>>no_fri;
        cin>>del_num;

        int forFirstNode = no_fri;



        while(no_fri)
        {
            int data;
            cin>>data;
            fri* tmpFri = new fri;
            tmpFri->popu = data;
            tmpFri->link = NULL;
            if(forFirstNode == no_fri)
                header->link = tmpFri;
            else{
                ptr = header;
                while(ptr->link != NULL)
                {
                    ptr = ptr->link;
                }
                ptr->link = tmpFri;
            }

            no_fri--;
        }

        //Deletion
        int deleteFriend = 0;
        while(del_num>0)
        {
             ptr = header;
            while(ptr->link != NULL)
            {
                previousFri = ptr;
                ptr = ptr->link;  //ptr is current friend
                if(ptr->link != NULL)
                    nextFri = ptr->link;
                if(ptr->popu < nextFri->popu)
                {
                    //cout<<"came here";
                    previousFri->link = nextFri;
                    ptr->link = NULL;
                    deleteFriend = 1;
                }

            }
            del_num--;
        }

        if(deleteFriend == 0 && del_num>0)
        {
            //cout<<"I reach here";
            ptr = header;
            while(ptr->link != NULL)
            {
                prePtr = ptr;
                ptr = ptr->link;
            }
            prePtr->link = NULL;
        }

        ptr = header;
        while(ptr->link != NULL)
        {
            ptr = ptr->link;
            cout<<ptr->popu<<" ";
        }
        cout<<"\n";



        test--;
    }
    return 0;
}
