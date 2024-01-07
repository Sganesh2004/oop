#include <iostream>
using namespace std;
class triangle
{
    int h, b;

public:
    triangle() // Default constructor
    {
        cout << "Enter height and base " << endl;
        cin >> h >> b;
        cout << "Area of triangle is " << (b * h) / 2 << endl;
    }

    triangle(int x, int y) // parameterized constructor
    {
        h = x;
        b = y;
        cout << "Area of triangle is " << (b * h) / 2 << endl;
    }

    triangle(triangle &obj) // copy   constructor
    {
        h = obj.h;
        b = obj.b;
        cout << "Area of triangle is " << (h * b) / 2 << endl;
    }
};
int main()
{
    triangle ob, ob2(10, 20);
    triangle ob3(ob2);

    return 0;
}
