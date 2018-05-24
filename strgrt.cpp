#include<iostream>
using namespace std;
int main()
{
string s1,s2;
int i,j,flag=0;
cin>>s1>>s2;
for(i=0;s1[i]!='\0';i++)
{
for(j=0;s2[j]!='\0';j++)
{
if(s1[i]==s2[j])
flag=0;
else
flag=1;
}
}
if(flag==0)
cout<<s1;
else if(s1.length()>s2.length())
cout<<s1;
else
    cout<<s2;
return 0;
}
