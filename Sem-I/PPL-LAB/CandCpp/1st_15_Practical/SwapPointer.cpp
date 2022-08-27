// Program 12

#include <iostream>

using namespace std;

int main()
{
    cout << "Swap two number using Pointer. \n";

    int num1 = 100, num2 = 200, *a, *b, temp;

    cout << "Number before swap. \n";
    cout << "Num1: " << num1 << " | Num2:" << num2 << endl;

    a = &num1;
    b = &num2;

    temp = *b;
    *b = *a;
    *a = temp;

    cout << "Number after swap. \n";
    cout << "Num1: " << num1 << " | Num2:" << num2 << endl;
    return 0;
}