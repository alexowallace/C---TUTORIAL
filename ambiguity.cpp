#include <iostream>
using namespace std;

class base1{
    public:
    void greet(){
        cout<<"how are you?"<<endl;

    }

};
class base2{
    public:
    void greet(){
        cout<<"kaise ho"<<endl;

    }

};

class derived: public base1 , public base2{
    int a;
    public:
    void greet(){
        base2 :: greet();
    }

};

class b{
    public:
    void say(){
        cout<<"hello world"<<endl;

    }
};

class c: public b{
    int a;
    public:
    void say(){
        cout<<"hello beautiful"<<endl;

    }
};
int main()
{

    // base1 base1obj;
    // base1obj.greet();
    // derived d;
    // d.greet();

    b d;
    d.say();
    c e;
    e.say();


    return 0;
};