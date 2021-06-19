#include<stdio.h>
#include<stdlib.h>


int main()
{
FILE *ptr = NULL;

char string[100];
ptr = fopen("sample.txt","r");
fscanf(ptr,"%s",string);
printf("content is =  %s\n",string);


return 0;
} 