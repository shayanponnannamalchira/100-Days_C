#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b;
    printf("Enter two Number");
        scanf("%d %d", &a, &b);
      a=a+b;
      b=a-b;
      a=a-b;
      printf("After Swapping a=%d and b=%d",a,b);
      getch();
}
