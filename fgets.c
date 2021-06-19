/* implementation of fgets */

#include<stdio.h>
#include<stdlib.h>

int main()
{

FILE *ptr = NULL;

ptr = fopen("sample.txt","r");
char string[10];

fgets(string,11,ptr); // we specify 11 because there is always a NULL character in a string 
printf("the string is = %s\n",string);

fclose(ptr);
return 0;
}