/* this is a program in C which test a function which takes a point with
two elements a X and Y. using structures.  You can decide the number of
elements you want to evaluate and the range. */

#include <stdio.h>
#include <stdlib.h>

//structure declaration
struct point
{
    int x;
    int y;
};


void func_print(struct point *index, int k)
{
  int j;
  for(j=0;j<k;j++)
  {
    printf("%d \t %d \t %d \t %p\n", j, (index+j)->x, (index+j)->y, (index+j)->y);
  }
}

int y_perform(struct point *index, int k)
{
   int i, d=6;
   for(i=0;i<k;i++)
   {
      (index+i)->y=d*((index+i)->x);
   }

   return 0;
}

int main()
{
   struct point *point_ptr;
   int i, n, start;

   //getting the range of the function
   printf("how many elemenst you want to evaluate?");
   scanf("%d",&n);
   printf("where do you want to start?");
   scanf("%d",&start);

   /* allocate memory dynamically for n object*/
   point_ptr=(struct point*)malloc(n*sizeof(struct point));

   //verifying if the pointer is not null
   if(point_ptr==NULL)
   {
    printf("Insufficient memory exiting..\n");
    return 0;
   }

   /* creating the range in the axis x */
   printf("\n");
   for(i=0;i<n;i++)
   {
     (point_ptr+i)->x = start + i;
     (point_ptr+i)->y =(point_ptr+i)->x;
   }

   func_print(point_ptr, n);
   y_perform(point_ptr, n);

   free(point_ptr);

   return 0;

}
