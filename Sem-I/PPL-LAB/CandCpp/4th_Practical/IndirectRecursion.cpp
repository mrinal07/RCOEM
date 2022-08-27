#include <iostream>
using namespace std;
int first(int);
int second(int);
int first(int n)
{
    if (n <= 1)
        return 1;
    else
        return n * second(n - 1);
}
int second(int n)
{
    if (n <= 1)
        return 1;
    else
        return n * first(n - 1);
}
int main()
{
    int num = 5;
    cout << first(num);
    return 0;
}
