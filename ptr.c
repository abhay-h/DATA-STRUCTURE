#include<stdio.h>
#include<stdlib.h>
#include<string.h> // header file

#define MAX 100 // preprocessor 

struct id // structure 
{
    int no;
    char name[100];
} person; // accessing var

int main()
{

int  *ptr , x; 
ptr = &x;
x = 10;
printf("enter the id no => ");
scanf("%d",&person.no);
printf("\nenter name => ");
scanf("%s",&person.name);

printf("%d\n%d\n%d\n%d\n%d\n",x,ptr,&ptr,*ptr);

printf("\nthe id no is = %d\nname is %s",person.no,person.name);

return 0;


}

    