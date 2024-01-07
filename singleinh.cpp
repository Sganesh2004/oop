#include<iostream> 
using namespace std; 
class A    
{
   public:
     int x;
   void getdata()
   {
     cout << "Enter the value of x = "; cin >> x;
   }
 };
class B : public A    
{
   private:
    int y;
   public:
   void readdata()
   {
     cout << "Enter the value of y = "; cin >> y;
   }
   void product()
   {
     cout << "Product = " << x * y;
   }
 };
 
 int main()
 {
    B a;   
    a.getdata();
    a.readdata();
    a.product();
    return 0;
 }