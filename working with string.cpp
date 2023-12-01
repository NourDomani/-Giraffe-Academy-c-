#include <iostream>

using namespace std;

int main()
{
    string phraes ="Nour University";
    cout<<phraes<<endl;
      cout<<phraes.length()<<endl;
        cout<<phraes[5]<<endl;
        phraes[5]='m';
          cout<<phraes<<endl;
            cout<<phraes.find("mni")<<endl;
            string phraessub;
            phraessub = phraes.substr(5 ,4);
              cout<<phraessub<<endl;
    return 0;
}
