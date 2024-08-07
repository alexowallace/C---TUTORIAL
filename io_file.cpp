#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    string st = "writing on sample 60.txt ";
    string st2;

    // opening file constructor and writing it
    //  ofstream out("sample60.txt");
    //  out << st;

    //
    // opening file constructor and reading  it
    ifstream in("sample60.txt");
    //  in>>st2;
    getline(in,st2);
     cout<<st2;
    return 0;
};