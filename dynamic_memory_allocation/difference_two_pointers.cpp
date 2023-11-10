#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    char name[]{"Frank"};

    char *char_ptr1{nullptr};
    char *char_ptr2{nullptr};
    char_ptr1 = &name[0];
    char_ptr2 = &name[3];
    cout << "In the string " << name << *char_ptr2 << "is" << (char_ptr2 - char_ptr1) << "away from " << *char_ptr1 << endl;
}