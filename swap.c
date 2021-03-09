#include<stdio.h>
int main()
{
    int n1=5,n2=10;
    int temp;
    temp = n1;
    n1=n2;
    n2=temp;

    printf("n1: %d\n",n1);
     printf("n2: %d",n2);
}
