#include <iostream>
using namespace std;

int main()
{

    int s1, s2, s3, s4, s5, sum, total = 500;
    float percentage;

    cout << "\nEnter marks of 5 subjects : ";
    cin >> s1 >> s2 >> s3 >> s4 >> s5;

    sum = s1 + s2 + s3 + s4 + s5;

    percentage = (sum * 100) / total;
    cout << "\nStudent Percentage Is : " << percentage << endl;

    return 0;
}