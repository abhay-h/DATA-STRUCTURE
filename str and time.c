#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

int main()
{
    char fullname[100];
    printf("enter your full name => ");
    gets(fullname);
    printf("\nSo your name is => ");
    puts(fullname);
    printf("\nstring length => %zu\n",strlen(fullname)); 
    return 0;
}