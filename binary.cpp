#include <iostream>
using namespace std;

class complex{
    int real;
    int imag;
    public:
    complex(int r=0,int i=0){
        real=r;
        imag=i;
    }
    complex operator +(complex &obj){
    complex res;
    res.real=real+obj.real;
    res.imag=imag+obj.imag;
    return res;
}
 complex operator -(complex &obj){
    complex res;
    res.real=real-obj.real;
    res.imag=imag-obj.imag;
    return res;
}
    void print();
};


void complex:: print(){
    cout<<real<<"+"<<imag<<"i"<<endl;
}

int main() {
  
    complex c1(5,10),c2(10,20);
    c1.print();
    c2.print();
    complex c3=c1+c2;
    c3.print();
    complex c4=c1-c2;
    c4.print();

return 0;
}