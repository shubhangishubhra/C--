#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    string name{"Frank"};
    string *string_ptr{&name};
    cout << *string_ptr << endl;
    name = "james";
    cout << *string_ptr << endl;
}