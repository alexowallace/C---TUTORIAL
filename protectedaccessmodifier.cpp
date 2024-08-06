#include <iostream>
using namespace std;

class base
{
protected:
    int a = 30;

private:
    int b = 20;

public:
    int getdata();
};
//                               	Public Derivation      	Private Derivation    	Protected Derivation
// Private members           	Not Inherited              	Not Inherited              	Not Inherited
// Protected members           	Protected                    	Private                  	Protected
// Public members           	Public                      	Private                    	Protected

int base ::getdata()
{
    return a;
}
class derived : protected base
{
};
int main()
{

    base b;
    derived d;
    cout << b.getdata() << endl;

    return 0;
};