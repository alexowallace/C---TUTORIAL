#include <iostream>
using namespace std;

class complex
{
    int real, imaginary;

public:
    void getdata()
    {
        cout << "realpart is" << real << endl;
        cout << "imaginary part is " << imaginary << endl;
    }

    void setdata(int a, int b)
    {
        real = a;
        imaginary = b;
    }
};
int main()
{
    complex c1;
    complex *ptr = &c1;

    (*ptr).setdata(1, 7);
    (*ptr).getdata();

    return 0;
};