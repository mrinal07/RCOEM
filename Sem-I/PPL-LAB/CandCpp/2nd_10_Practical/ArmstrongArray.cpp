#include <iostream>

using namespace std;

void verify(int num);

int main()
{
    int n;
    cout << "Enter number of array elements: ";
    cin >> n;

    int *arr = new int[n];

    cout << "\nEnter array elements: " << endl;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
 
    
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " =   ";
        verify(arr[i]);
        cout << endl;
    }

    delete[] arr;

    return 0;
}

void verify(int num)
{
    int n, rem, reverse, sum = 0;

    n = num;

    while (num > 0)
    {
        rem = num % 10;
        num = num / 10;
        sum = sum + (rem * rem * rem);
        reverse = reverse * 10 + rem;
    }

    if (n == sum)
    {
        cout << "Armstrong Number";
    }

    else if (n == reverse)
    {
        cout << "Palindrome Number";
    }
    
    else
    {
        cout << "Simple Number";
    }
}
