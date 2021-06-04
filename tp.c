// this file is only used to demonstrate the college programs !! 
#include<signal.h>
#include"stdio.h"
#include"stdlib.h"
#include"math.h"
#include"conio.h"
#include"string.h"

int length (char *p)
{
    int i= 0; 
    while (*p!='\0')
    {
        i++;
        p++;
    }
    return i;
}

int main ()
{
    int n;
    char str[80];
    printf("enter a string > ");
    gets(str);


    n=length(str);
    printf("\nlenght of string %s is %d", str, n);


}