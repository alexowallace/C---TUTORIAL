#include <iostream>
using namespace std;

class A
{
    int a1;

public:
    // A & void setdata(int a)
    void setdata(int a)
    {
        this->a1 = a;
        // return *this;
    }
    void getdata(void)
    {
        cout << " a1 is " << a1 << endl;
    }
};
int main()
{
    A a;
    a.setdata(6);
    a.getdata();

    return 0;
};