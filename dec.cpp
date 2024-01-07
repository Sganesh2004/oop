

#include <iostream>
using namespace std;

class Count {
   private:
    int value;

   public:

    
    Count(int x){

value=x;
 }

   
    void operator ++ () {
        ++value;
    }


  
    void operator ++ (int) {
        value++;
    }

    void display() {
        cout << "Count: " << value << endl;
    }
};

int main() {

    Count count1(20);


    count1++;
    count1.display();

   
    ++count1;

    count1.display();
    return 0;
}