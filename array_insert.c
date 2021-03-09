#include<stdio.h>
int main()
{
    int arr[100],n,p,value,i;
    printf("enter size of array:");
     scanf("%d", &n);
 printf("enter element of array:",n);
     for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
     }

        printf("enter position\n");

        scanf("%d",&p);

        printf("enter value\n");

        scanf("%d",&value);

        for(i=n-1;i>=p-1;i--){
            arr[i+1]=arr[i];
}
        arr[p-1]=value;

        for(i=0;i<=n;i++)
        printf("%d",arr[i]);

        return 0;
}
/*#include <stdio.h>

int main()
{
   int array[100], position, c, n, value;
   printf("Enter number of elements in array\n");
   scanf("%d", &n);

   printf("Enter %d elements\n", n);

   for (c = 0; c < n; c++)
      scanf("%d", &array[c]);

   printf("Enter the location where you wish to insert an element\n");
   scanf("%d", &position);

   printf("Enter the value to insert\n");
   scanf("%d", &value);

   for (c = n - 1; c >= position - 1; c--)
      array[c+1] = array[c];

   array[position-1] = value;

   printf("Resultant array is\n");

   for (c = 0; c <= n; c++)
      printf("%d\n", array[c]);

   return 0;
}
*/
