// Program 5
#include <iostream>
using namespace std;
#define len 3
int main()
{

    int arr[len][len] = {
        1,2,3,
        4,5,6,
        7,8,9

    };
    int sum = 0;
    int len2 = len;
    int skipMiddleElement = (len / 2);

    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len; j++)
            cout << arr[i][j] << " ";

        cout << endl;
    }
    cout << endl;

    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len; j++)
            if (i == j)
                sum += arr[i][j];

        sum += arr[i][--len2];
    }

    cout << "Sum of Diagonals: " << sum;

    return 0;
}