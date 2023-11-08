// using new[] keyword to allocate array
// using delete[] to delete
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int *array_ptr{nullptr};
    int size{};
    cout << "how big u want the array to be";
    cin >> size;
    array_ptr = new int[size];
    cout << *array_ptr << endl;
    delete[] array_ptr;

    double *temp_ptr{nullptr};
    cout << "How many temps? ";
    cin >> size;
    temp_ptr = new double[size];
    cout << temp_ptr << endl;
    delete[] temp_ptr;
}