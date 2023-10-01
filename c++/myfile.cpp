#include <iostream>
using namespace std;


int main()
{
   int no;
    
    while(!(cin >> no))
      {
        cout << "YES";
        cin.clear();
        cin.ignore(100, '\n');
              
      } 
    
   if (no<=0)
       cout<<"Yes";

   else 
       cout<<"No";
    


    return 0;
}
