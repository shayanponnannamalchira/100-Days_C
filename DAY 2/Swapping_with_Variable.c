#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b, temp;
    printf("Enter two Number");
        scanf("%d %d", &a, &b);
      temp=a;
      a=b;
      b=temp;
      printf("After Swapping a=%d and b=%d",a,b);
      getch();
}
