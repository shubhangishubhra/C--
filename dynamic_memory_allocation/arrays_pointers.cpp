#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int scores[]{100, 92, 98};
    cout << scores << endl;
    cout << *scores << endl;

    int *score_ptr{scores}; // dereferencing
    cout << score_ptr << endl;
    cout << *score_ptr << endl;
    cout << score_ptr[0] << endl;
    cout << score_ptr[1] << endl;
    cout << score_ptr[2] << endl;

    // getteing addresses adding 1 adds 4byes (adding addres is next integer which is 4 pointers away)
    cout << score_ptr << endl;
    cout << (score_ptr + 1) << endl;
    cout << (score_ptr + 2) << endl;
}