#include <stdio.h>
#include <math.h>
int main()

{
    int choice;
    float area, radius, length, breadth, base, height, side1, side2, side3;
    do
    {
        printf("\n1. Area of circle");
        printf("\n2. Area of rectangle");
        printf("\n3. Area of triangle");
        printf("\n4. Area of rhombus");
        printf("\n5. Exit");
        printf("\nEnter your choice : ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("\nEnter the radius of the circle: ");
            scanf("%f", &radius);
            area = 3.14 * radius * radius;
            printf("\nArea of the circle = %.2f sq. units", area);
            break;
        case 2:
            printf("\nEnter the length and breadth of the rectangle: ");
            scanf("%f%f", &length, &breadth);
            area = length * breadth;
            printf("\nArea of the rectangle = %.2f sq. units", area);
            break;
        case 3:
                printf("\n1. Area of right angle triangle");
                printf("\n2. Area of equilateral triangle");
                printf("\n3. Area of isosceles triangle");
                printf("\n4. Area of scalene triangle");
                printf("\nEnter your choice (1-4): ");
                scanf("%d", &choice);
                switch (choice)
                {
                case 1:
                    printf("\nEnter the base and height of the triangle: ");
                    scanf("%f%f", &base, &height);
                    area = 0.5 * base * height;
                    printf("\nArea of the triangle = %.2f sq. units", area);
                    break;
                case 2:
                    printf("\nEnter the side of the triangle: ");
                    scanf("%f", &side1);
                    area = sqrt(3) / 4 * side1 * side1;
                    printf("\nArea of the triangle = %.2f sq. units", area);
                    break;
                case 3:
                    printf("\nEnter the two sides of the triangle: ");
                    scanf("%f%f", &side1, &side2);
                    area = 0.5 * side1 * side2;
                    printf("\nArea of the triangle = %.2f sq. units", area);
                    break;
                case 4:
                    printf("\nEnter the three sides of the triangle: ");
                    scanf("%f%f%f", &side1, &side2, &side3);
                    float s = (side1 + side2 + side3) / 2;
                    area = sqrt(s * (s - side1) * (s - side2) * (s - side3));
                    printf("\nArea of the triangle = %.2f sq. units", area);
                    break;
                default:
                    printf("\nInvalid choice");
                    break;
                }
                 break;
        case 4:
            printf("\nEnter the two diagonals of the rhombus: ");
            scanf("%f%f", &side1, &side2);
            area = 0.5 * side1 * side2;
            printf("\nArea of the rhombus = %.2f sq. units", area);
            break;
        default:
            printf("\nInvalid choice");
            break;
        }
    } while (choice != 5);
    return 0;
}