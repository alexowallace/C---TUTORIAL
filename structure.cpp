#include <iostream>
#include <iomanip>
using namespace std;

typedef struct employee
{
    /* data */
    int eid;
    char favchar;
    float salary;

} ep;

union money
// union choose only one at a time
{
    int rice;
    char car;
    float pounds;
};

int main()
{

    ep Harry;
    Harry.eid = 1;
    Harry.favchar = 'c';
    Harry.salary = 12343.43;
    cout << setw(4) << Harry.eid << endl;
    cout << setw(4) << Harry.favchar << endl;
    cout << setw(4) << Harry.salary << endl;

    // union union money m1;
    // m1.rice = 34;
    // m1.car = 'c';
    // cout << m1.car;

    // enum enum meal
    // {
    //     breakfast,
    //     dinner,
    //     lunch
    // };
    // cout << breakfast;
    // cout << dinner;
    // cout << lunch;

    return 0;
}