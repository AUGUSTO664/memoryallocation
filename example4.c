/* C program to read and print the N student details using structure and
dynamic memory allocation */

#include <stdio.h>
#include <stdlib.h>

/* structure declaration*/
struct student
{
  char name[30];
  int roll;
  float perc;
};

int main()
{
  struct student *pstd;
  int n,i;

  printf("Enter total number of elements: ");
  scanf("%d",&n);

  /*allocate memory dynamically for n object */
  pstd=(struct student*)malloc(n*sizeof(struct student));

  if(pstd==NULL)
  {
    printf("Insufficient memory exiting ..\n");
    return 0;
  }

  /* read and print details */
  for(i=0;i<n;i++)
  {
    printf("\nEnter detail of student [%3d]:\n",i+1);
    printf("enter name: ");
    scanf(" ");
    gets((pstd+i)->name);
    printf("Enter roll number: ");
    scanf("%d",&(pstd+i)->roll);
    printf("Enter percentage: ");
    scanf("%f",&(pstd+i)->perc);
  }

  printf("\n entered details are: \n");
  for(i=0;i<n;i++)
  {
    printf("%30s \t %5d \t %.2f\n",(pstd+i)->name, (pstd+i)->roll,
            (pstd+i)->perc);
  }

  free(pstd);

  return 0;
}
