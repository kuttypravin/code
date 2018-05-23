#include <iostream>
#include<stdlib.h>
using namespace std;
int main() {
    int N,D,A,value,sum=0,i;
    cin>>N;
    cin>>A;
    cin>>D;
    value=A;
    for(i=0;i<N;i++) 
    {
        sum+=value;
        value=value+D;
    }
 cout<<sum;
 return 0;
}
