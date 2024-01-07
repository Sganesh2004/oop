#include <iostream>  
    using namespace std;  
    class A  
    {  
        protected:  
         int a;  
        public:  
        void get_a(int n)  
        {  
            a = n;  
        }  
    };  
      
    class B  
    {  
        protected:  
        int b;  
        public:  
        void get_b(int n)  
        {  
            b = n;  
        }  
    };  
    class C : public A,public B  
    {  
       public:  
        void display()  
        {  
            std::cout << "The value of a is  " <<a<< std::endl;  
            std::cout << "The value of b is  " <<b<< std::endl;  
            cout<<"multiplication of a and b is  "<<a*b<<endl;  
        }  
    };  
    int main()  
    {  
       C c;  
       c.get_a(5);  
       c.get_b(2);  
       c.display();  
      
        return 0;  
    }