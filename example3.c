/* c program to read and print the student details using structure
and dynamic memory allocation*/

#include<stdio.h>
#include<stdlib.h>

/*structure declaration */

struct student
{
  char name[30];
  int roll;
  float perc;

};

int main()
{

   /*declarando un puntero hacia una estructura*/
   struct student *pstd;

   /*el puntero apunta a un modulo de memoria en el heap del tamaño
      de la estructura */
   pstd=(struct student*)malloc(1*sizeof(struct student));

   if(pstd==NULL)
   {
     printf("insufficient memory, exiting... \n");
     return 0;
   }

   /*read and print details*/
   printf("Enter name: ");
   gets(pstd->name);
   printf("Enter roll number: ");
   scanf("%d",&pstd->roll);
   printf("Enter percentage: ");
   scanf("%f",&pstd->perc);

   printf("\nEntered details are: \n");
   printf("name: %s, Roll#: %d, Pencentage: %.2f\n", pstd->name,
           pstd->roll, pstd->perc);

   free(pstd);

   return 0;

}
