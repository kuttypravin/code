#include<iostream.h>
using namespace std;
int lcs(char*X, char*Y, int p, int q)
{
    int L[m+1][n+1];
    for (int i=0; i<=p; i++)
    {
        for (int j=0; j<=q; j++)
        {
            if (i == 0 || j == 0)
                L[i][j] = 0;
  else if (X[i-1] == Y[j-1])
                L[i][j] = L[i-1][j-1] + 1;
 else
                L[i][j] = max(L[i-1][j], L[i][j-1]);
        }
    }
    return L[p][q];
}
int findMinCost(char X[], char Y[], int costX, int costY)
{
    int m = strlen(X), n = strlen(Y);
    int len_LCS = lcs(X, Y, m, n);
    return costX * (m - len_LCS) +
           costY * (n - len_LCS);
}
int main()
{
    char X[]="ef";
    char Y[]="gh";
    cout<<"Minimum Cost to make two strings "
         << " identical is = " << findMinCost(X, Y, 10, 20);
    return 0;
}
