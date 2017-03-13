/*#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    string mystr;
    cin>>n;
    getline (cin, mystr);
    while(n>0){
        cout<<mystr[0];
        n--;
    }
    return 0;
}
*/

// cin with strings
#include <iostream>
#include <string>
using namespace std;

int main ()
{ int n; int size;
  cin>>n;
  cin >> size;
  char mystr[size];
  cin >> mystr;
  while(n>0){
    for(int i=0;i<size;i++){
        cout<<(int)mystr[i];
    }
    n--;
  }
  return 0;
}

