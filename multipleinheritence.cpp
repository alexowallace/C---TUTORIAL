#include <iostream>
using namespace std;

// class derived: visibility-mode base1 , visibility-mode base2
// {
//     class body od class "derived C"
// };

class base1
{
protected:
    int base1int;


public:
    void set_base1int(int a)
    {
        base1int = a;
    }
};
class base2
{
protected:
    int base2int;


public:
    void set_base2int(int a)
    {
        base2int = a;
    }
};

class derived : public base1, public base2
{
public:
    void show()
    {
        cout << "value of base1 is " << base1int << endl;
        cout << "value of base2 is " << base2int << endl;
        cout << "value of base1 + base2 is " << base1int + base2int << endl;
    }
};

int main()
{
    derived ashok;
    ashok.set_base1int(23);
    ashok.set_base2int(34);
    ashok.show();

    return 0;
};