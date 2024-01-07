#include <iostream>
using namespace std;

class var
{
    int val;

public:
    var(int a = 0)
    {
        val = a;
    }
    var operator++(int)
    {
        var res;
        res.val = val++;

        cout << "value using operator++  is:" << val << endl;
    }

    var operator--(int)
    {
        var res;
        res.val = val--;
        //
        cout << "value using operator--  is:" << val << endl;
    }
    void operator-()
    {

        val = -val;
        cout << "value using  operator - is:" << val << endl;
    }
    void operator++()
    {

        val = ++val;
        cout << "value using  operator ++ is:" << val << endl;
    }
    void operator--()
    {

        val = --val;
        cout << "value using  operator -- is:" << val << endl;
    }

    void print();
};

void var::print()
{
    cout << "value  is:" << val << endl;
}

int main()
{

    var c1(10);
    c1.print();
    c1++;
    c1--;
    -c1;
    --c1;
    --c1;
    return 0;
}