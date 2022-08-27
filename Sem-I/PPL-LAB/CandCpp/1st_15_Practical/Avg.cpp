// Program 1
#include <iostream>
using namespace std;

int main()
{
    cout<<"AVERAGE AND SUM OF A NUMBER"<<endl;
    int arr[5] = {1,2,3,4,5};
    int sum=0;
    
    for (int i = 0; i < 5; i++)
    sum += arr[i];

    int len = sizeof(arr)/sizeof(arr[0]);

    cout<<"SIZE OF ARRAY:"<<len<<endl;

    cout<<"SUM:"<<sum<<endl;

    cout<<"AVERAGE:"<<( sum/len)<<endl;    

    return 0;
}