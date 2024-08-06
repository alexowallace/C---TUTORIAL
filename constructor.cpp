#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    // creating constructor
    //  Constructor is a special member function with the same name as of the class.
    // It is used to initialize the objects of its class
    // It is automatically invoked whenever an object is created
    complex(void); // constructor declaration

    void printnum()
    {
        cout << a << " + " << b << "i" << endl;
    }
};
complex ::complex(void)//constructor definition
{
    a = 10;
    b = 23;
}

int main()
{
    complex c1,c2,c3;
    c1.printnum();
    c2.printnum();
    c3.printnum();

    return 0;
}
