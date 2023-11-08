#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int *int_ptr{nullptr};
    int_ptr = new int; //new keyword to allocate storage
    cout << int_ptr << endl;
    cout << *int_ptr << endl;
    *int_ptr = 100;
    cout << *int_ptr << endl;
    delete int_ptr; // delete keyword to deallocate storage
    cout << *int_ptr << endl; 
}
