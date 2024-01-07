#include <stdio.h>
#include <math.h>
void circle()
{
    int r, area;
    printf("Enter radius of circle\n");
    scanf("%d", &r);
    area = 3.14 * r * r;
    printf("area of circle is %d sq. units\n", area);
}
void rectangle()
{
    int l, b, area;
    printf("Enter length and breadth of rectangle\n");
    scanf("%d %d", &l, &b);
    area = l * b;
    printf("area of rectangle is %d sq. units\n", area);
}

void right()
{
    int h, b, area;
    printf("Enter height and breadth of right angle triangle\n");
    scanf("%d %d", &h, &b);
    area = h * b / 2;
    printf("area of  right angle triangle is %d sq. units\n", area);
}
void Equilateral()
{
    int s, area;
    printf("Enter side of Equilateral triangle\n");
    scanf("%d", &s);
    area = sqrt(3) / 4 * s * s;
    printf("area of  Equilateral triangle is %d sq. units\n", area);
}
void isocelene()
{
    int a, b, area;
    printf("Enter sides of isocelene triangle\n");
    scanf("%d %d", &a, &b);
    area = b * (sqrt(4 * a * a - b * b)) / 4;
    printf("area of  isocelene triangle is %d sq. units\n", area);
}
void scalene()
{
    double a, b, c, area;
    double s;
    printf("Enter sides of scalene triangle\n");
    scanf("%lf %lf %lf", &a, &b, &c);
    s = (a + b + c) / 2.0;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    printf("area of  scalene triangle is %d sq. units\n", area);
}

void rhombus()
{
    int d1, d2, area;
    printf("Enter two diagonals of rhombus\n");
    scanf("%d %d", &d1, &d2);
    area = d1 * d2 / 2;
    printf("area of  rhombus is %d sq. units\n", area);
}
int main()
{
    int n, ch;
    do
    {
        printf("enter choice\n ");
        printf("1.circle\n 2.rectangle\n 3.triangle\n 4.rhombus\n 5. exit\n");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            circle();
            break;
        case 2:
            rectangle();
            break;
        case 3:
            printf("1. Area of right angle triangle\n");
            printf("2. Area of equilateral triangle\n");
            printf("3. Area of isosceles triangle\n");
            printf("4. Area of scalene triangle\n");
            printf("Enter your choice between (1-4)\n ");
            scanf("%d", &ch);
            switch (ch)
            {
            case 1:
                right();
                break;
            case 2:
                Equilateral();
                break;
            case 3:
                isocelene();
                break;
            case 4:
                scalene();
                break;

            default:
                printf("Invalid");
                break;
            }
            break;

        case 4:
            rhombus();
            break;
        case 5:
            printf("exit");
            break;
        default:
            printf("invalid operation");
            break;
        }
        printf("\n");
    } while (n != 5);
    return 0;
}