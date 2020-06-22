/*
exercise 8.6 write calloc, by calling malloc.
 the standard library function calloc(n, size) returns a pointer to n
objects if size size, with the storage initialized to zero. write calloc
by calling malloc or modifying it

calloc: allocate n objects of size size*/

#include <stdio.h>
#include <stdlib.h>

void *mycalloc(unsigned, unsigned);

/* this function inizialyze every memory address to zero */
void *mycalloc(unsigned n, unsigned size)
{
    unsigned i, nb;
    char *p, *q;
      //store the number the elements for the array
    nb = n * size;


    if((p=q=malloc(nb)) != NULL)
        for(i=0;i<nb;i++)
            *p++=0; // we set each elemen to  0
    return q;
    //we return the start of the array
}

int main(int argc, char *argv[])
{
       // assignning a NULL pointer.
    int *p=NULL;
    int i=0;

/* we request a memory space fo our array */
    p=mycalloc(100, sizeof *p);
    if(NULL==p)
    {
      printf("my calloc returned NULL\n");
    }
    else
    {
      for(i=0;i<=100;i++)
      {
        printf("%08X\t %p %d\n", p[i], p, *p);
        if(i%8==7)
            printf("\n");
      }

       printf("\n");
       int elements=sizeof(p);
       printf("%d\n", elements);
       free(p);
    }

    return 0;

}


/* this exercise was obtain from:
http://www.learntosolveit.com/cprogramming/Ex_8.6_calloc.html
*/
