#include <iostream>
using namespace std;

int main()
{
    string str;
    getline(cin,str);
    int count=str.length();
    for (int i=0;i<str.length();i++)
        {
         if (str.at(i)==' ')
          {
           count--;
          }
        }
        cout<<count;
    return 0;
}
