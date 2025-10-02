#include<stdio.h>
#include<conio.h>
int main()
{
     int choice;
    printf("Choose which shape you want the area of??");
    printf("\n1.Square\n2.Rectangle\n3.Triangle\n4.Circle");
    scanf("%d", &choice);
    switch(choice)
    {
        case 1:
        {
            int side, area;
            printf("Enter the side of the square");
            scanf("%d", &side);
            area=side*side;
            printf("Area of Square is %d", area);
            break;
        }
        case 2:
        {
            int length, breadth, area;
            printf("Enter the length and breadth of the rectangle");
            scanf("%d %d", &length, &breadth);
            area=length*breadth;
            printf("Area of Rectangle is %d", area);
            break;
        }
        case 3:
        {
            int base, height, area;
            printf("Enter the base and height of the triangle");
            scanf("%d %d", &base, &height);
            area=0.5*base*height;
            printf("Area of Triangle is %d", area);
            break;
        }
        case 4:
        {
            float radius, area;
            printf("Enter the radius of the circle");
            scanf("%f", &radius);
            area=3.14*radius*radius;
            printf("Area of Circle is %f", area);
            break;
        }
        default:
        {
            printf("Invalid Input");
        }
    }
    return 0;
     
}