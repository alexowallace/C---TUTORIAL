#include <iostream>
using namespace std;

class shop
{
private:
    int itemid[100];
    int itemprice[100];
    int counter;

public:
    void initcounter(void) { counter = 0; }
    void displayprice(void);
    void getprice(void);
};

void shop ::getprice(void)
{
    cout << "enter id of your item no." << counter + 1 << endl;
    cin >> itemid[counter];
    cout << "enter price of your item" << endl;
    cin >> itemprice[counter];
    counter++;
}

void shop::displayprice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "the price of item of id" << itemid[i] << "is" << itemprice[i] << endl;
    }
}

int main()
{
    shop s1;
    s1.initcounter();
    s1.getprice();
    s1.getprice();
    s1.getprice();
    s1.getprice();
    s1.displayprice();
    return 0;
}