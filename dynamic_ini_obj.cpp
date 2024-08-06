// dynamic initialization of object using constructor

#include <iostream>
using namespace std;

class bankdeposit
{
    int principal;
    int years;
    float rate;
    float returnvalue;

public:
    bankdeposit() {}
    bankdeposit(int p, int y, float r);
    bankdeposit(int p, int y, int r);
    void show();
};

bankdeposit ::bankdeposit(int p, int y, float r)
{

    principal = p;
    years = y;
    rate = r;
    returnvalue = principal;

    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1 + r);
    }
}
bankdeposit ::bankdeposit(int p, int y, int r)
{

    principal = p;
    years = y;
    rate = float(r) / 100;
    returnvalue = principal;

    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1 + r);
    }
}

void bankdeposit ::show()
{
    cout << endl
         << "principal amount is" << principal << endl
         << "return value after" << years << "is" << returnvalue << endl;
}

int main()
{
    bankdeposit b1, b2, b3;
    int p, y;
    float r;
    int R;

    cout << "enter value of p,y,r" << endl;
    cin >> p >> y >> r;
    b1.show();

    return 0;
};