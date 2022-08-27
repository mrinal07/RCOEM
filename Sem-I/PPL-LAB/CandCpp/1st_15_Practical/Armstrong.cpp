// Program 2
#include <iostream>
using namespace std;

int main()
{
    cout << "ARMSTRONG OF ANY NUMBER" << endl;

    int num;
    cout << "Enter any number ";
    cin >> num;
    cout << endl;

    int len = 0, n = num, rem = 0, sum = 0, temp = 1;

    // Find number's length
    while (n != 0)
    {
        rem = n % 10;
        len++;
        n = n / 10;
    }

    n = num, rem = 0;
    cout << "ORIGINAL NUMBER:" << num << endl;

    while (n != 0)
    {
        rem = n % 10;

        for (int i = 0; i < len; i++)
            temp = temp * rem;

        sum += temp;
        temp = 1;
        n = n / 10;
    }

    cout << "OUTPUT NUMBER:" << sum << endl;
    (sum == num) ? cout << "Number is an Armstrong" << endl : cout << "Number is not an Armstrong" << endl;
    return 0;
}