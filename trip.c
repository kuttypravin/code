#include<iostream>
using namespace std;
bool findnum(int A[], int arr_size, int sum)
{
    int l, r;
    sort(B, B+arr_size);
    for (int i=0; i<arr_size-2; i++)
    {
        l = i + 1; 
        r = arr_size-1; 
        while (l < r)
        {
            if(B[i] + B[l] +B[r] == sum)
            {
                printf("Triplet is %d, %d, %d", B[i], B[l], B[r]);
                return true;
            }
            else if (B[i] +B[l] +B[r] < sum)
                l++;
            else 
                r--;
        }
    }
    return false;
}
int main()
{
    int B[] = {1, 4, 45, 6, 10, 8};
    int sum = 22;
    int arr_size = sizeof(B)/sizeof(B[0]);
    findnum(B, arr_size, sum);
    return 0;
}
