//typecast.cpp -- torcing type changes
#include <iostream>
int main(int argc, char const *argv[])
{
    using namespace std;
    int auks,bats,coots;
    //the following statement adds the values as double
    //then converts the result to int

    auks = 19.99 + 11.99;//相加再截断
    //these statements add values as int
    //截断再相加
    bats = (int) 19.99 + (int) 11.99;   //old C syntax
    coots = int (19.99) + int (11.99);  //new C++ syntax
    cout << "auks = " << auks << ", bats = " << bats;
    cout << ", coots = " << coots << endl;
    char ch = 'Z';
    cout << "The code for " << ch << " is ";//print as char
    cout << int(ch) << endl;    //print as int
    return 0;
}
