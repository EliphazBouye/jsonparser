#include <stdio.h>

int main() 
{
  FILE *fp;
  char ch;

  // Open the file
  fp = fopen("./test.json","r");

  // Check if file don't return false
  if (NULL == fp) {
    printf("This file can't be opened \n");
  }

  printf("contents of this file are \n");

  // Loop on every contents of the file
  do {
    ch = fgetc(fp);
    printf("%c", ch);
  } while (ch != EOF);

  // Closing the file
  fclose(fp);
  
  return 0;
}
