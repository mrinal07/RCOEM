#include <iostream>
using namespace std;
int main()
{

    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int *arr1 = new int[n];

    cout << "\nEnter elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr1[i];

    int start = 0, end = n - 1;
    while (start < end)
    {
        int temp = arr1[start];
        arr1[start] = arr1[end];
        arr1[end] = temp;
        start++;
        end--;
    }

    cout << "\n\nArray elements in Reverse order:" << endl;

    for (int i = 0; i < n; i++)
        cout << arr1[i] << " ";

    delete[] arr1;
    return 0;
}
