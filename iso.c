#include<bits/stdc++.h>
#define NO_OF_CHARS 256
using namespace std;
bool isIsomorphic(str s1, str s2)
{
 
    int m = s1.length(), n = s2.length();
 if (m != n)
      return false;
   bool is_visited[NO_OF_CHARS] = {false};
    int map[NO_OF_CHARS];
    memset(map, -1, sizeof(map));
    for (int i = 0; i < n; i++)
    {
        if (map[s1[i]] == -1)
        {
         if (is_visited[s2[i]] == true)
                return false;
           is_visited[s2[i]] = true;
            map[s1[i]] = s2[i];
 }
            else if (map[s1[i]] != s2[i])
            return false;
    }
 return true;
}
 int main()
{
    str s1 = "bbfg";
    str s2 = "nnop";
   cout << isIsomorphic(s1, s2) << endl;
   return 0;
}
