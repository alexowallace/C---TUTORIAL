#include <iostream>
using namespace std;

int count = 0;

class num
{
public:
    num()
    {
        count++;
        cout << "construtor call for obj no." << count << endl;
    }
    ~num()
    {
        cout << "detructor called for obj no." << count << endl;
        count--;
    }
};

int main()
{
    cout << "inside main func" << endl;
    cout << "create obj" << endl;

    num n1;
    {
        cout << "entering block" << endl;

        cout << "create 2 more obj" << endl;
        num n2, n3;

        cout << "exiting block" << endl;
    }

    cout << "back to main" << endl;

    return 0;
};