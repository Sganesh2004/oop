#include<iostream>
using namespace std;
class mean{
    private:
    int x,y;
    public:
    mean()
    {
        cout<<"Enter two numbers"<<endl;
        cin>>x>>y;
    }
    friend float calculatemean(mean obj);
};
float calculatemean(mean obj)
{
 return (obj.x+obj.y)/2;
}
int main()
{
    mean obj;
    cout<<"Mean of two numbers is "<<calculatemean(obj)<<endl;
    return 0;
}