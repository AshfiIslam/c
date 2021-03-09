#include<stdio.h>
int main()
{
   int n1,n2,n3;
   printf("enter 3 num:\n ");
   scanf("%d\ %d\n %d",&n1,&n2,&n3);
   if((n1>n2)&&(n1>n3))
   {
       printf("n1 max");
   }
   else if((n2>n1)&&(n2>n3))
    {
    printf("n2 max");
    }
   else
   {
       printf("n3 max");
   }
    return 0;
}
