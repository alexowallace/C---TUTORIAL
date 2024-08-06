#include <iostream>
using namespace std;
// class Employee
// {
//     int id;
//     int salary;

// public:
//     void setId(void)
//     {
//         salary = 122;
//         cout << "Enter the id of employee" << endl;
//         cin >> id;
//     }

//     void getId(void)
//     {
//         cout << "The id of this employee is " << id << endl;
//     }
// };

class complex
{
    int a;
    int b;

public:
    void setdata(int v1, int v2)
    {
        a = v1;
        b = v2;
    }

    void setdatabysum(complex o1, complex o2)
    {
        a = o1.a + o2.a;
        b = o2.b + o2.b;
    }

    void display(void)
    {
        cout << a << " + " << b << "i" << endl;
    }
};
int main()
{
    // Employee fb[4];
    // for (int i = 0; i < 4; i++)
    // {
    //     fb[i].setId();
    //     fb[i].getId();
    // }

    complex c1, c2, c3;
    c1.setdata(3, 5);
    c1.display();
    c2.setdata(4, 6);
    c2.display();

    c3.setdatabysum(c1, c2);
    c3.display();

    return 0;
}