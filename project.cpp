#include <iostream>
#include <cmath>
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
    void get_datasimple()
    {
        cout << "enter 2 number" << endl;
        cin >> a >> b;
    }
    void showsimple()
    {
        cout << "sum is " << a + b << endl;
        cout << "minus  is " << a - b << endl;
        cout << "product  is " << a * b << endl;
        cout << "divide is " << a / b << endl;
    }
};
class scien
{
protected:
    int a;
    int b;

public:
    void get_datascien()
    {
        cout << "enter 2 number" << endl;
        cin >> a >> b;
    }
    void showscien()
    {
        cout << "cos is " << cos(a) << endl;
        cout << "sin  is " << sin(a) << endl;
        cout << "tan  is " << tan(a) << endl;
        cout << "exp is " << exp(a) << endl;
    }
};

class hybrid : public simple, public scien
{
};

int main()
{
    // simple num;
    // scien sci;
    // num.get_data();
    // num.show();
    // sci.get_data();
    // sci.show();

    hybrid calc;
    calc.get_datasimple();
    calc.showsimple();
    calc.get_datascien();
    calc.showscien();
    return 0;
};
