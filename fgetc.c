/* in this code i make use of fgetc(), to read character and also implemented a basic use of for loop
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i;
FILE *ptr = NULL;
ptr = fopen("sample.txt", "r");


for (int i = 0; i < 10; i++)
{
    char c= fgetc(ptr);
    printf("char is = %c\n",c);
}
fclose(ptr);
return 0;
}