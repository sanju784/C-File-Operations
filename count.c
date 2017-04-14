/**
 * Program to count character, lines, spaces, tabs in a file
 */
 
#include <stdio.h>
#include <stdlib.h>

void main() {
  FILE *fp;
  char ch;

  fp = fopen ("sample.txt", "r");
  if (fp == NULL) {
    printf("Failed to open file");
    exit;
  }

  int c, l, s, t;
  while(1) {
    ch = fgetc(fp);
    if(ch == EOF)
	  break;
	c++;
	if (ch == '\n')
	  l++;
	if (ch == ' ')
	  s++;
	if (ch == '\t')
	  t++;
  }
  fclose(fp);
  printf("\nTotal Characters = %d", c);
  printf("\nTotal Lines = %d", l);
  printf("\nTotal Spaces = %d", s);
  printf("\nTotal Tabs = %d", t);
}