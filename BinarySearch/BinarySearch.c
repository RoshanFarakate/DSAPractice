//Basic binary search prog.
#include<stdio.h>
#define MAX 20

int main()
{
    int a[MAX],start,end,middle,n,i,item;
    printf("Enter the number of elements of array: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter elemnts: ");
        scanf("%d",&a[i]);
    }
    printf("Enter the element to be searched: ");
    scanf("%d",&item);
    start=0;
    end=n-1;
    middle=(start+end)/2;
    while(start<=end)
    {
        if(item<a[middle])
        {
            end=middle-1;
        }
        else if(item>a[middle])
        {
            start = middle+1;
        }
        else
        {
            printf("%d found at position %d",item,middle);
            return 0;
        }
        middle = (start+end)/2;
    }
    printf("%d not found in array",item);
}
