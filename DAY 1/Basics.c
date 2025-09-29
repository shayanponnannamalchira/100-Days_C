#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    char b;
    b="Hello";
    printf("%s", b);  // String should be printed using %s format specifier
    printf("Enter a Number: ");
    scanf("%D", &a);
    printf("Entered Number is: %d", a);
    return 0;
}