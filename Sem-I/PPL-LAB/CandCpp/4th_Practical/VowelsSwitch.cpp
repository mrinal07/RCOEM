#include <iostream>
using namespace std;
int main()
{
    char a[10];
    int i, j, count = 0;

    cout<<"Enter any word to find vowels: ";
    cin.getline(a, 20);

    for (i = 0; a[i] != '\0'; i++)
    {
        switch (a[i])
        {

        case 'a':
        case 'A':
        case 'i':
        case 'I':
        case 'e':
        case 'E':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
            count++;
        }
    }
    cout <<"Number of vowels : "<< count;
    return 0;
}
