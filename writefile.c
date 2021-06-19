#include<stdio.h>
#include<stdlib.h>


int main()
{

char string[100];

printf("enter a string > "); 

FILE *ptr = NULL;

ptr = fopen("smaple2.txt","a");

gets(string);

fprintf(ptr,"%s",string);

printf("content is = %s ",string);

return 0;
}