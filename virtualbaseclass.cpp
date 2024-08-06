#include <iostream>
using namespace std;

class student
{
protected:
    int roll;

public:
    void set_num(int a)
    {
        roll = a;
    }
    void print_num(void)
    {
        cout << "roll no is " << roll << endl;
    }
};

class test : virtual public student
{

protected:
    float maths, science;

public:
    void set_mark(float m1, float m2)
    {
        maths = m1;
        science = m2;
    }
    void print_mark(void)
    {
        cout << "marks of math and science is " << maths << science << endl;
    }
};
class sport : virtual public student
{

protected:
    float score;

public:
    void set_score(float sc)
    {
        score = sc;
    }
    void print_score(void)
    {
        cout << "score is " << score << endl;
    }
};
class result : public test, public sport
{

private:
    float total;

public:
    void display(void)
    {
        print_num();
        print_mark();
        print_score();
        cout << "total is " << score + math + science << endl;
    }
};

int main()
{
    result ashok;
    ashok.set_num(7);
    ashok.set_mark(90, 78);
    ashok.set_score(8);
    ashok.display();

    return 0;
};