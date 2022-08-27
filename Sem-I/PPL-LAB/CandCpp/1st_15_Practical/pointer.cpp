// Program 11

#include <iostream>
using namespace std;

int main()
{
    cout << "Create, Initialize, Assign, and Access Pointer Variable." << endl;

    int num = 10;
    int *p = &num;

    cout << "Number: " << num << " | Number Address: " << &num << endl;
    cout << "Pointer Value: " << *p << " | Pointer Address: " << p << endl;

    return 0;
}