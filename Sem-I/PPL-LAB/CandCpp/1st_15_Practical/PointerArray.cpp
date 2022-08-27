// Program 14

#include <iostream>
using namespace std;
#define MAX 3
int main()
{
    cout << "Array of Pointers. \n";

    int arr[MAX], n;
    cout << "Enter Array Elements: ";
    for (int i = 0; i < MAX; i++)
    {
        cin >> n;
        arr[i] = n;        
    }

    cout << "Array Elements WITHOUT Pointer Array \n";
    for (int i = 0; i < MAX; i++)  
    {
        cout<<arr[i]<<" ";
    }  
    
    int *ptr[MAX];

    for (int i = 0; i < MAX; i++)
    {
        ptr[i] = &arr[i];
    }

    cout << "\nArray Elements WITH Pointer Array \n";
    for (int i = 0; i < MAX; i++)  
    {
        cout<<*ptr[i]<<" ";
    }  
    
    


    return 0;
}