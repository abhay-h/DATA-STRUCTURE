#include<stdio.h>
#include<stdlib.h>
struct student 
{
  
   int marks;
   
   char grade;
   
   int rollno;

   char name[100];

 
} st;

typedef struct student ZAP;
 void display()
 {
    printf ("\n\n");
    printf("Your name > %s " ,st.name);

    printf ("\nYour marks are > %d", st.marks);
  
   printf ("\nYour grade is > %c", st.grade);
  
   printf ("\nYour rollno is > %d", st.rollno);

 }
 
int main () 
 
{
   printf("enter your name > ");
   gets(st.name);
  
printf ("\nenter your marks > ");
  
scanf ("%d", &st.marks);
  
printf ("\nenter your grade > ");
  
scanf ("%s", &st.grade);
  
printf ("\nenter your rollno > ");
  
scanf ("%d", &st.rollno);

  
display();

}
