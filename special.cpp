#include <iostream>
using namespace std;
int main()
{
string s;
int i,count=0;
getline(cin,s);
cout << endl;
for(i=0;s[i]!='\0';i++)
{
if((s[i]>='0')&&(s[i]<='9')||(s[i]>='a')&&(s[i]<='z')||(s[i]>='A')&&(s[i]<='Z'))
{
continue;
}
else
{
    count++;
}
}
cout << count;
return 0;
}
