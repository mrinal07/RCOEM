// Program 13

#include <iostream>
using namespace std;

int main()
{

    cout << "Size of different Pointers. \n";

    int x = 50;
    int *p1 = &x;

    cout << "Size of pointer: " << sizeof(p1) << endl;
    cout << "Size of pointer having int value: " << sizeof(*p1) << endl;

    float y = 20.4;
    float *p2 = &y;
    cout << "Size of pointer: " << sizeof(p2) << endl;
    cout << "Size of pointer having float value: " << sizeof(*p2) << endl;

    char c = 'm';
    char *p3 = &c;
    cout << "Size of pointer: " << sizeof(p3) << endl;
    cout << "Size of pointer having char value: " << sizeof(*p3) << endl;

    long int z = 50;
    long int *p4 = &z;

    cout << "Size of pointer: " << sizeof(p4) << endl;
    cout << "Size of pointer having long int value: " << sizeof(*p4) << endl;

    double a = 12.24;
    double *p5 = &a;
    cout << "Size of pointer: " << sizeof(p5) << endl;
    cout << "Size of pointer having float value: " << sizeof(*p5) << endl;

    return 0;
}