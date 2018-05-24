#include<iostream>
using namespace std;
int main()
{
    int h1,h2,m1,m2,c1,c2,min1,min2,fin,fin1,res;
    cin>>h1;cout<<" ";cin>>m1;
    cout<<endl;
    cin>>h2;cout<<" ";cin>>m2;
    cout<<endl;
    c1=h1*60;
    min1=c1+m1;
    c2=h2*60;
    min2=c2+m2;
    if(min1>min2)
    {
        res=min1-min2;
    }
    else
    {
        res=min2-min1;
    }
    fin=res/60;
    fin1=res%60;
    cout<<fin<<" "<<fin1;
    return 0;
}
