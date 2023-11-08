#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int scores[]{100, 95, 89};

    cout << scores << endl; // add first element

    int *score_ptr{scores}; // derefering
    cout << score_ptr << endl;

    /*array subscript*/
    cout << scores[0] << endl;
    cout << scores[1] << endl;
    cout << scores[2] << endl;
    /*pointer subscript*/
    cout << score_ptr[0] << endl;
    cout << score_ptr[1] << endl;
    cout << score_ptr[2] << endl;

    /*array offset*/
    cout << *score_ptr << endl;
    cout << *(score_ptr + 1) << endl;
    cout << *(score_ptr + 2) << endl;
    /*pointer offset*/
    cout << *score_ptr << endl;
    cout << *(score_ptr + 1) << endl;
    cout << *(score_ptr + 2) << endl;
}