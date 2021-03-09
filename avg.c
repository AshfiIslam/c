#include<stdio.h>
int main()
{
    int n1,n2,n3,sum;
    float avg;
    printf("enter 3 num :\n ");
    scanf("%d %d %d",&n1,&n2,&n3);
    sum=n1+n2+n3;
    avg=sum/3;
    printf("sum: %d\n",sum);
    printf("avg : %f",avg);

}
