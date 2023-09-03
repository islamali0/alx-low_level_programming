# include <stdio.h>
 
// Function to print reverse of
// the passed string
void reverse(char *str)
{
  if (*str)
  {
    reverse(str + 1);
    printf("%c", *str);
  }
}

int main()
{
  char a[] = "\nColton Walker";
  reverse(a);
  return 0;
}
