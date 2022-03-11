#include <stdio.h>
#include <stdlib.h>
int main()
{
  FILE *fp;
  char str[80], str1[80];
 
  fp = fopen("File1.txt","w");
 
  if(fp == NULL)
  {
 printf("Cannot open file.\n");
 exit(1);
  }
  printf("Enter string to be written in a file: ");
  fscanf(stdin, "%s", str); /*Read from keyboard */
 
  fprintf(fp, "%s", str); /*Write str to file */
  fclose(fp);
 
  fp = fopen("File1.txt","r");
  
  if(fp == NULL) {
 printf("Cannot open file.\n");
 exit(1);
  }
  fscanf(fp, "%s", str1); /* read a word from file and copy into str1 */
  fprintf(stdout, "%s", str1); /* print str1 on screen */
  return 0;
}
