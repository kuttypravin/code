#include<iostream>
using namespace std;
bool findPartiion (int arr[], int m)
{
    int sum = 0;
    int i, j;
    for (i = 0; i < m; i++)
      sum += arr[i];
    if (sum%2 != 0)  
       return false;
   bool part[sum/2+1][m+1];
     for (i = 0; i <= m; i++)
      part[0][i] = true;
    for (i = 1; i <= sum/2; i++)
      part[i][0] = false;     
  for (i = 1; i <= sum/2; i++)  
     {
       for (j = 1; j <= m; j++)  
       {
         part[i][j] = part[i][j-1];
         if (i >= arr[j-1])
           part[i][j] = part[i][j] || part[i - arr[j-1]][j-1];
       }        
     }    
      for (i = 0; i <= sum/2; i++)  
     {
       for (j = 0; j <= m; j++)  
          printf ("%4d", part[i][j]);
       printf("\n");
     } 
      
     return part[sum/2][m];
}     
int main()
{
  int arr[] = {3, 1, 1, 2, 2, 1};
  int m = sizeof(arr)/sizeof(arr[0]);
  if (findPartiion(arr, m) == true)
     printf("yes");
  else
     printf("no");
  getchar();
  return 0;
}
