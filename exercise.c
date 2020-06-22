/* C program to input and print text using dynamic memory allocation */
#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n;
   char *text;
/* le damos al programa el numero maximo de caracteres que puede usar*/
   printf("Enter limit of text: ");
   scanf("%d", &n);

   /* allocate memory dynamically, le damos al valor de texto para poner
tantos caracteres como nosotros queramos */
   text=(char*)malloc(n*sizeof(char));

   printf("enter text: ");
   scanf(" "); /*clear input buffer*/
   gets(text);

   printf("inputted text is: %s\n", text);


  /* free memory */
   free(text);

   return 0;

}
