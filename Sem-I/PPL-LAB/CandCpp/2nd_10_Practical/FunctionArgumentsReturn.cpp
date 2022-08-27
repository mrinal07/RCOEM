#include <iostream>
#include <conio.h>

using namespace std;

int checkOddEven(int);

int main()
{
    cout << "Function with args and return\n";

    int num = 0;

    cout << "Enter number to check odd or even ";
    cin >> num;

    if (checkOddEven(num) == 1)
        cout << "Number is EVEN";
    else
        cout << "Number is ODD";

        return 0;
}

int checkOddEven(int num)
{
    int ans = 0;

    if (num % 2 == 0)
        ans = 1;
    else
        ans = -1;

    return ans;
}
