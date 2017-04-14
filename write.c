/**
 *  Program to read a file by character and write it to other file
 */
 
 #include <stdio.h>
 #include <stdlib.h>
 
 void main() {
   FILE *f1, *f2;
   char ch;
   
   f1 = fopen("sample.txt", "r");
   if (f1 == NULL) {
     puts("Cannot open source file");
	 exit(0);
   }

   //if sample1.txt does not exist it will create the file
   //if exists then the file content will be overwritten
   //to append use "a" instead of "w"
   f2 = fopen("sample1.txt", "w");
   if (f2 == NULL) {
     puts("Cannot open target file");
	 fclose(f1);
     exit(0);
   }
   while(1) {
     ch = fgetc(f1);
	 if (ch == EOF)
	   break;
	 fputc(ch, f2);
   }
   fclose(f1);
   fclose(f2);
 }