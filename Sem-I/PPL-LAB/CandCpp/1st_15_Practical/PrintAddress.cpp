// Program 15

#include <iostream>
using namespace std;

int main()
{

    cout << "Print Elements and their Address. \n";

    int arr[5], n;

    cout << "Enter numbers\n";
    for (int i = 0; i < 5; i++)
    {
        cin >> n;
        arr[i] = n;
    }

    for (int i = 0; i < 5; i++)
    {
        cout<<"Array element "<<arr[i]<<" address: "<<&arr[i]<<endl;
    }
    

    return 0;
}