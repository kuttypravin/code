#include<iostream.h>
using namespace std;
int findMinLength(string arr[],int n)
{
    int min=MAX;
for(int i=0; i<=n-1; i++)
 if (arr[i].length() < min)
  min = arr[i].length();
    return(min);
}
bool allContainsPre(string arr[], int n, string str,
                       int start, int end)
{
    for (int i=0; i<=n-1; i++)
        for (int j=start; j<=end; j++)
            if (arr[i][j] != str[j])
                return (false);
    return (true);
}
string commonPre(string arr[], int n)
{
    int index = findMinLength(arr, n);
    string prefix; 
    int low = 0, high = index;
while (low <= high)
    {
        int mid = low + (high - low) / 2;
 if (allContainsPre (arr,n,arr[0],low, mid))
        {
            pre = pre+arr[0].substr(low,mid-low+1);
low=mid+1;
        }
else 
            high=mid-1;
    }return (pre);
}
int main()
{
    string arr[] = {"geeksforgeeks","geeks",
                    "geek","geezer"};
    int n=sizeof (arr) / sizeof (arr[0]);
string ans = commonPrefix(arr, n); if (ans.length())
        cout<<"The longest common prefix is"<< ans;
    else
        cout<<"There is no common prefix";
    return (0);
}
