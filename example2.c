/* C program to read a one dimensional array, print sum of all elements along
with inputted array elements using Dynamic memory allocation*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
   int *array;
   int limit,i;
   int sum=0;

   printf("Enter total number of elements: ");
   scanf("%d", &limit);

   /* allocate memory for limit elements dynamically */
   array=(int*)malloc(limit*sizeof(int));
   if(array==NULL)
   {
     printf("Insufficient memory, exiting.. \n");
     return 0;
   }

   printf("Enter %d elements: \n", limit);
   for(i=0;i<limit;i++)
   {
     printf("Enter element %3d: ",i+1);
     scanf("%d", (array+i));
     /* calculate sum */
     sum = sum + *(array+i);
   }

   printf("Array elements are: ");
   for(i=0;i<limit;i++)
   {
     printf("%3d ",*(array+i));
   }


   printf("\nsum of all elements: %d\n", sum);
   return 0;


}
