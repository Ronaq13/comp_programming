#include<iostream>
using namespace std;

class hindustaan {

    private:
        int ageOfKing = 30;

        int confidential_Info(){
            return ageOfKing;
        }
    public:
        int gadaar(){
            return confidential_Info();
        }
};
class mugals: public hindustaan{};

int main()
{
    mugals soldier;
    cout<<"\n\n\t Mugals got the age of king (sad) : \n";
    cout<<"\n\t\t"<<soldier.gadaar()<<"\n\n\n";
    return 0;
}
