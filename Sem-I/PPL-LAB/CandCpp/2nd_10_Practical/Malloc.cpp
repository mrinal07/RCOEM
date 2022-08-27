#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{

    cout << "malloc() and free() functions.\n";

    int n, *ptr = NULL;

    cout << "Enter number of elements ";
    cin >> n;

    cout << "Number of elements are: " << n;

    ptr = (int *)malloc(n * sizeof(int));

    if (ptr == NULL)
    {
        cout << "\nMemory not allocated";
    }
    else
    {
        printf("\nMemory successfully allocated using malloc");
        cout << "\nEnter elements for array ";
        for (int i = 0; i < n; i++)
        {
            cin >> ptr[i];
        }
        cout << "\nElements are: ";
        for (int i = 0; i < n; i++)
        {
            cout << ptr[i] << " ";
        }

        free(ptr);
        cout << "\nMalloc Memory successfully freed.";
    }

    return 0;
}