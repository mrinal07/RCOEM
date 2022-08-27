#include <iostream>
using namespace std;
unsigned factTR(unsigned int n, unsigned int a)
{
    if (n == 1)
        return a;
    return factTR(n - 1, n * a);
}
unsigned int fact(unsigned int n)
{
    return factTR(n, 1);
}
int main()
{
    cout << fact(4);
    return 0;
}
