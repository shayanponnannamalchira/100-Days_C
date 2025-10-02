#include<stdio.h>
#include<conio.h>
int main()
{
    printf("Choose which scale you wanna convert to");
    printf("\n 1. Celsisus to Fahrenheit \n 2. Fahrenheit to Celsius\n");
    int option;
    scanf("%d", &option);

    switch(option)
    {
        case 1:
        {
            float celsius, fahrenheit;
            printf("Enter temperature in Celsius");
            scanf("%f", &celsius);
            fahrenheit=(celsius*9/5)+32;
            printf("Temperature in Fahrenheit is %f", fahrenheit);
            break;
    }
        case 2:
        {
            float celsius, fahrenheit;
            printf("Enter temperature in Fahrenheit");
            scanf("%f", &fahrenheit);
            celsius=(fahrenheit-32)*5/9;
            printf("Temperature in Celsius is %f", celsius);
            break;
        }
        default:
        {
            printf("Invalid Input");
        }
    }
    return 0;
}