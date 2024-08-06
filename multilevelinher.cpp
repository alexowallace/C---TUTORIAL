#include <iostream>
using namespace std;
class student
{
protected:
    int roll_num;

public:
    void set_roll_num(int);
    void get_roll_num(void);
};
void student::set_roll_num(int r)
{
    roll_num = r;
}
void student::get_roll_num()
{
    cout << "roll num is" << roll_num << endl;
}

class exam : public student
{
protected:
    float maths;
    float chemistry;

public:
    void set_marks(float, float);
    void get_marks(void);
};

void exam ::set_marks(float m1, float m2)
{
    maths = m1;
    chemistry = m2;
}
void exam::get_marks()
{
    cout << "math's marks is:" << maths << endl;
    cout << "math's chemistry is:" << chemistry << endl;
}
class result : public exam
{
    float percentage;

public:
    void display()
    {
        get_roll_num();
        get_marks();

        cout << "your percentage is " << (maths + chemistry) / 2 << "%" << endl;
    }
};

int main()
{

        result r1;

    r1.set_roll_num(5);

    r1.set_marks(34.5, 67.4);
    r1.display();

    return 0;
};