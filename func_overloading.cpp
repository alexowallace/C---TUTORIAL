#include <iostream>
using namespace std;

// int sum(int a, int b)
// {
//     return a + b + c;
// }

float area(int r)
{
    return 3.14 * r * r;
}
float area(int l, int b, int h)
{
    return l * b * h;
}
float area(int r, int h)
{
    return 3.14 * r * r * h;
}
int main()
{
    // cout<<"sum is"<<sum(3,6);
    int r = 5, l = 5, b = 8, h = 9;
    cout << "area of circle is" << area(r) << endl;
    cout << "area of rec is" << area(l, b, h) << endl;
    cout << "area of cylin is" << area(r, h) << endl;

    return 0;
}