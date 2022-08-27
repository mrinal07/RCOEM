#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    cout<<"Use of New and Delete operator.";

    int *arr = new int[5];
    int size=0;

    cout<<"Enter size of an array ";
    cin>>size;

    cout<<"Enter elements in an array.\n";
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter "<<(i+1)<<" element:";
        cin>>arr[i];
    }
    
    for (int i = 0; i < size; i++)
    {
        cout<<"Element number "<<(i+1)<<" is: ";
        cout<<arr[i]<<endl;
    }

    delete []arr;
    

    return 0;

}