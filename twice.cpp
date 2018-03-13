#include <iostream>
using namespace std;
 
int find(int arr[],int arr_size)
{
    
     int res = arr[0];
     for (int i=1; i<arr_size; i++)
        res = res^arr[i];
     return res;
}
 
int main()
{
     int arr[] = {2, 3, 5, 4, 5, 3, 4};
     int m= sizeof(arr)/sizeof(arr[0]);
     cout << "Element occurring once is " << find(arr, m);
     return 0;
}
