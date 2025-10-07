#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\nEnter your choice: ");
    int choice;
    scanf("%d",&choice);
    switch(choice)
    {
        case 1: printf("Addition is %d\n",a+b);
                break;
        case 2: printf("Subtraction is %d\n",a-b);
                break;
        case 3: printf("Multiplication is %d\n",a*b);
                break;
        case 4: if(b!=0)
                    printf("Division is %d\n",a/b);
                else
                    printf("Error! Division by zero.\n");
                break;
        default: printf("Invalid choice!\n");
    }
}