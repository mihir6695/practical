
#include<stdio.h>

int main()
{
   int a, b, c, i, f;

   printf("Enter two numbers to add\n");
   scanf("%d%d",&a,&b);

   c = (a + b)+1;

   printf("Sum of entered numbers = %d\n",c);


    f=0;
    i=2;
    while(i <= a/2)
    {
        if(a%i == 0)
        {
            f=1;
            break;
        }
        i++;
    }
    if(f==0)
        printf("Prime Number");
    else
        printf("Not Prime Number");

   return 0;
}
