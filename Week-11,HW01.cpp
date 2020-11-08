#include <stdio.h>
#include <string.h>
#include <ctype.h>
int plusN(int n);
int main()
{
 char word[20], buff;
 int i, j, k, n;
 printf("Input word : ");
 gets(word);
 char* ptr;
 ptr = word;
 n = strlen(word);
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
 for (i = 0; i < n - 1; i = plusN(i))
  for (j = i + 1; j < n; j++)
  {
   if (toupper(word[i]) < toupper(word[j]))
    continue;
   else
   {
    buff = word[i];
    word[i] = word[j];
    word[j] = buff;
   }
  }
 printf("%s", word);

 return 0;
}
int plusN(int n)
{
 return n + 1;
}
