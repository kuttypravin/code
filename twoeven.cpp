#include <iostream>
using namespace std;
int main()
{
	int n,n1,p;
	cin>>n>>n1;
	p=n*n1;
	if(p>0||p<0)
	{
	if(p%2==0)
	{
	    cout<<"even";
	}
	else
	cout<<"odd";
	}
	else
	cout<<"invalid";
	return 0;
}
		
