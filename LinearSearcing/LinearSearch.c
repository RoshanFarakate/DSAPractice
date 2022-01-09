//Basic linear search prog.
#include<stdio.h>
#define MAX 20

int main()
{
    int a[MAX],n,i,item;
    printf("Enter the number of elements of array: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter elemnts: ");
        scanf("%d",&a[i]);
    }
    printf("Enter the element to be searched: ");
    scanf("%d",&item);
    for(i=0;i<n;i++)
    {
        if(a[i]==item)
        {
            printf("%d found at position %d\n",item,i);
            return 0;
        }
    }
    printf("Item %d not found in array",item);
}
