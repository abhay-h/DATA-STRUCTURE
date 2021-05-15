 #include<stdlib.h>
 #include<stdio.h>
 int main()
 {
   int *a, n,i;

   printf("Enter no of element > : ");
   scanf("%d",&n);

   a=(int*)malloc(n*sizeof(int));

   for (i = 0; i < n; i++)
   {
         printf("enter the elements > : ");
         scanf("%d",&a);
         printf("\n%d",a);
   }
   
    return 0;
 }