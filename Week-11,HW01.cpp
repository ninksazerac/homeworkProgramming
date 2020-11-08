#include <stdio.h>
#include <string.h>
#include <ctype.h>
int plusN(int p);
int main()
{
 char word1[20], buff;
 int i, j, k, p;
 printf("Input word : ");
 gets_s(word1);
 char* ptr;
 ptr = word1;
 p = strlen(word1);
 printf("Swap Capital And Small Letters:\n");
 while (*ptr != '\0')
 {
  if (*ptr >= 'a' && *ptr <= 'z' || *ptr >= 'A' && *ptr <= 'Z')
  {
   if (*ptr >= 'a' && *ptr <= 'z')
    printf("%c", (*ptr - 'a') + 'A');
   if (*ptr >= 'A' && *ptr <= 'Z')
    printf("%c", (*ptr - 'A') + 'a');
  }
  else
   printf("0");
  ptr += 1;

 }
 printf("\n");
 printf("Arrange Letters:\n");
 for (i = 0; i < p - 1; i = plusN(i))
  for (j = i + 1; j < p; j++)
  {
   if (toupper(word1[i]) < toupper(word1[j]))
    continue;
   else
   {
    buff = word1[i];
    word1[i] = word1[j];
    word1[j] = buff;
   }
  }
 printf("%s", word1);

 return 0;
}
int plusN(int n)
{
 return n + 1;
}
