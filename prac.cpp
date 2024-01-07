#include<iostream>
using namespace std;
class B;
class A
{
    int x;
    public:
   void getdata(){
    cout<<"Enter num x"<<endl;
    cin>>x;
   }
   friend int compare(A,B);
};
class B
{
    int y;
    public:
   void getdata(){
    cout<<"Enter num y"<<endl;
    cin>>y;
   }
   friend int compare(A,B);
};
int compare(A a, B b)
{
    if(a.x>b.y)
    {
        cout<<a.x<<" is graeter"<<endl;
    }
    else
    {
        cout<<" is graeter"<<b.y<<endl;
    }
    return 0;
}
int main()
{
   A aa;
  B bb;
aa.getdata();
bb.getdata();
compare(aa,bb);
    return 0;
}