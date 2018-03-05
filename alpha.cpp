#include<iostream.h>
using namespace std;
int lcs(char *A, char *B, int m, int n)
{
    int L[m+1][n+1];
    for (int i=0; i<=m; i++)
    {
        for (int j=0; j<=n; j++)
        {
            if (i == 0 || j == 0)
                L[i][j] = 0;
  else if (Aalpha[i-1] == Y[j-1])
                L[i][j] = L[i-1][j-1] + 1;
 else
                L[i][j] = max(L[i-1][j], L[i][j-1]);
        }
    }
    return L[m][n];
}
int findMinCost(char X[], char Y[], int costX, int costY)
{
    int m = strlen(X), n = strlen(Y);
    int len_LCS = lcs(A, B, m, n);
    return costX * (m - len_LCS) +
           costY * (n - len_LCS);
}
int main()
{
    char X[] = "arc";
    char Y[] = "bug";
    cout << "Minimum Cost to make two strings "
         << " identical is = " << findMinCost(A, B, 10, 20);
    return 0;
}
