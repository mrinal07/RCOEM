// Program 6
#include <iostream>
using namespace std;
#define len 4

int countZero(int arr[len][len]);
int main()
{
    int arr[len][len] =
        {
            {1, 0, 0, 0},
            {0, 1, 0, 1},
            {0, 1, 1, 0},
            {1, 1, 0, 1}};

    cout << "Original Array:" << endl;

    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Number of Zeros are: " << countZero(arr);

    return 0;
}

int countZero(int arr[len][len])
{

    int count = 0;

    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len; j++)
        {
            if (arr[i][j] == 0)
                count++;
        }
    }
    return count;
}