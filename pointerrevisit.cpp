#include <iostream>
using namespace std;

int main()
{
    int a = 3;
    int *ptr = &a;

    cout << "value of a is " << *ptr << endl;
    cout << "value of a is " << ptr << endl;

    int *p = new int(40);
    cout << "address p is" << *p << endl;
    delete p;

    return 0;
};