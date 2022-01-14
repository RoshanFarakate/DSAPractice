#include<stdio.h>
#define MAX 5

int top = -1;
int stack[MAX];
int i;

int main()
{
    int choice;
    int item;
    do
    {
        printf("1.Push 2.Pop 3.Display Enter Choice: \n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            if(top==MAX-1)
            {
                printf("Stack Overfolw\n");
            }
            else{
                printf("Enter the item to be pushed: \n");
                scanf("%d",&item);
                top = top+1;
                stack[top]=item;
                printf("Pushed item: %d\n",item);
            }
            break;
           case 2:
                if(top==-1)
                {
                    printf("Stack underflow\n");
                }
                else{
                    printf("Popped item %d\n",stack[top]);
                    top = top-1;
                }
                break;
            case 3:
                if(top==-1)
                {
                    printf("Stack is empty\n");
                }
                else{
                    printf("Stack elemetns: \n");
                    for(i=top;i>0;i--){
                        printf("%d ",stack[i]);
                    }
                }
                break;
            case 0:
                break;
        default:
                printf("Enter correct choice\n");
            break;
        }
    } while (choice!=0);
    return 0;
}
