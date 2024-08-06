#include <iostream>
using namespace std;

// class derived: visibility-mode base1 , visibility-mode base2
// {
//     class body od class "derived C"
// };

class simple
{
protected:
    int a;
    int b;

public:
    void get_data()
    {
        cout << "enter 2 number" << endl;
        cin >> a >> b;
    }
    void show()
    {
        cout << "sum is " << a + b << endl;
        cout << "minus  is " << a - b << endl;
        cout << "product  is " << a * b << endl;
        cout << "divide is " << a / b << endl;
    }
};
// class hybrid
// {
// protected:
//     int base2int;

// public:
//     void set_base2int(int a)
//     {
//         base2int = a;
//     }
// };

// class derived : public base1, public base2
// {
// public:
//     void show()
//     {
//         cout << "value of base1 is " << base1int << endl;
//         cout << "value of base2 is " << base2int << endl;
//         cout << "value of base1 + base2 is " << base1int + base2int << endl;
//     }
// };

int main()
{
    simple num;
    num.get_data();
    num.show();

    return 0;
};
