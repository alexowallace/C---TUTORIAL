#include <iostream>
using namespace std;

class base
{

public:
    int var1;
    void display()
    {
        cout << "displaying base class var1 " << var1 << endl;
    }
};
class derived : public base
{
public:
    int var_derived;
    void display()
    {
        cout << "displaying derived class var_derived" << var_derived << endl;
    }
};

int main()
{
    base *base_pointer;
    base obj1_base;
    derived obj_derived;
    base_pointer = &obj_derived;

    base_pointer->var1 = 45;
    base_pointer->display();

    return 0;
};