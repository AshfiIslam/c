#include<stdio.h>
int main()
{

    int a[100],i,p,n;

    printf("enter the size:\n");
    scanf("%d",&n);
     for(i=0;i<n;i++)
     scanf("%d",&a[i]);
     printf("enter position to be deleted:");
     scanf("%d",&p);
     if(p>n){
        printf("can't be deleted\n");
     }
        else{
            for(i=p-1;i<n-1;i++)
                a[i]=a[i+1];
                n--;
        }
        for(i=0;i<=n-1;i++)
        printf("%d",a[i]);


}
