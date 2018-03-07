#include <stdio.h>
#include <string.h>
 int main()
{
 char S[100];
 printf("Enter a string to reverse\n");
 gets(S);
 strrev(S);
 printf("Reverse of the string is \n%s\n",S);
 return 0;
}
