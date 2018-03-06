#include<bits/stdc++.h>
using namespace std;
int gcd(int N, int Q)
{
    if (N==0)
        return Q;
    return gcd(Q%N, N);
}
int findGCD(int arr[], int n)
{
    int result = arr[0];
    for (int i=1; i<n; i++)
        result = gcd(arr[i], result);
 return result;
}
int main()
{
    int arr[] = {2, 4, 6, 8, 16};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << findGCD(arr, n) << endl;
    return 0;
}
