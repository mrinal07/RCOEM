// Program 3
#include <iostream>
using namespace std;

int main()
{
    cout << "REVERSE OF AN NUMBER(UPTO 3 DIGIT)" << endl;

    int num = 567;
    int n = num, rem = 0, rev = 0, sum = 0;

    while (n != 0)
    {
        rem = n % 10;
        // cout<<"rem->"<<rem;

        rev = rev * 10 + rem;

        n = n / 10;
        // cout<<"n->"<<n;
    }

    cout << endl
         << "Input number: " << num << endl;
    cout << "Reverse number: " << rev << endl;

    return 0;
}