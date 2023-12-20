#include <stdio.h>
float total(int a, int b);
int main()
{
   float sub[7], tot=0;
   int countvar=0;
   while(countvar < 7)
   {
       printf("Enter marks for %d subject: ",countvar+1 );
       scanf("%f", &sub[countvar]);

       tot=total(tot,sub[countvar]);

       countvar++;
    }

   printf("TOTAL MARKS ARE %f ", tot);

   getch();
   return 0;
}

float total(int a, int b )
{
    return(a+b);
}
