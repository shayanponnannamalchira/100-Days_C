#include<stdio.h>
int main()
{
    int n;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    for(int i=n; i<=10; i++)
    {
        printf("%d\n",i);
    }
}